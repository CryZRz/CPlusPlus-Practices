#include <gtkmm.h>
#include <iostream>

#include "init.hpp"

int main(int argc, char* argv[]){
    auto app = Gtk::Application::create(argc, argv);

    Gtk::Window window;
    window.set_title("Jimena");

    Gtk::Box mainBox(Gtk::ORIENTATION_VERTICAL, 10);
    window.set_default_size(400, 200);

    Gtk::Grid grid;
    grid.set_row_spacing(10); // Espaciado vertical entre widgets
    grid.set_column_spacing(10); // Espaciado horizontal entre widgets

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Gtk::Entry* entry = Gtk::manage(new Gtk::Entry);
            Gdk::RGBA white_color("white");
            entry->override_background_color(white_color);
            entry->override_color(Gdk::RGBA("black"));
            grid.attach(*entry, i, j, 1, 1);
        }
        
    }
    
    Gtk::Box boxGrid(Gtk::ORIENTATION_HORIZONTAL, 15);
    Gtk::Box boxResults(Gtk::ORIENTATION_VERTICAL, 10);
    Gtk::Box boxResultsCalc(Gtk::ORIENTATION_VERTICAL, 10);
    boxGrid.pack_start(grid, false, false, 0);

    for (int i = 0; i < 3; i++)
    {
        Gtk::Entry* entry = Gtk::manage(new Gtk::Entry);
        Gtk::Box* box = Gtk::manage(new Gtk::Box);
        Gtk::TextView* textView = Gtk::manage(new Gtk::TextView);
        textView->get_buffer()->set_text("N");
        textView->set_editable(false);
        boxResults.pack_start(*entry);
        boxResultsCalc.pack_start(*textView);
    }
    boxGrid.pack_start(boxResults, false, false, 0);
    boxGrid.pack_start(boxResultsCalc, false, false, 0);
    

    Gtk::Button button("Calculate");
    button.set_size_request(50, 20);

    button.signal_clicked().connect([&grid, &boxResults](){
        int matrizSaveData[3][3];
        int listResults[3];

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                Gtk::Entry* entry = dynamic_cast<Gtk::Entry*>(grid.get_child_at(j, i));
                std::cout << "Valor en (" << i << ", " << j << "): " << entry->get_text() << std::endl;
                matrizSaveData[i][j] = std::stoi(entry->get_text());
            }
        }

        int indexResults = 0;
        for (const auto& child : boxResults.get_children()) {
            // Verificar si el widget hijo es un Gtk::Entry
            Gtk::Entry* entry = dynamic_cast<Gtk::Entry*>(child);
            if (entry) {
                // Si es un Gtk::Entry, obtener el texto ingresado y mostrarlo
                listResults[indexResults] = std::stoi(entry->get_text());
                std::cout << "Valor: " << entry->get_text() << std::endl;
            }
            indexResults++;
        }
        
        init(matrizSaveData, listResults);
    });

    mainBox.pack_start(boxGrid, false, false, 0);
    mainBox.pack_start(button, false, false, 0);

    window.add(mainBox);

    window.show_all();

    return app->run(window);
}   