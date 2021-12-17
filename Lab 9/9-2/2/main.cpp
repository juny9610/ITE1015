#include "canvas.h"

int main() {
    vector<Shape*> shapes;

    size_t row, col;
    cin >> row >> col;
    
    Canvas canvas(row, col);
    canvas.Print();

    while(true) {
        string command;
        cin >> command;

        if(command == "quit") break;

        if(command == "add") {
            string type;
            cin >> type;

            int x, y, w, h;
            char b;

            if(type == "rect") {
                cin >> x >> y >> w >> h >> b;
                shapes.push_back(new Rectangle(x,y,w,h,b));
            }

            if(type == "tri_up") {
                cin >> x >> y >> h >> b;
                shapes.push_back(new UpTriangle(x,y,h,b));
            }

            if(type == "tri_down") {
                cin >> x >> y >> h >> b;
                shapes.push_back(new DownTriangle(x,y,h,b));
            }

            if(type == "diamond") {
                cin >> x >> y >> h >> b;
                shapes.push_back(new Diamond(x,y,h,b));
            }
        }

        if(command == "draw") {
            canvas.Clear();
            for(int i = 0; i < shapes.size(); i++) shapes[i]->Draw(&canvas);
            canvas.Print();
        }

        if(command == "delete") {
            int idx, cnt = 0;
            cin >> idx;
            vector<Shape*>::iterator it;
            for(it = shapes.begin(); it != shapes.end(); it++) {
                if(cnt == idx) {
                    shapes.erase(it);
                    break;
                }
                cnt++;
            }
        }

        if(command == "dump") {
            for(int i = 0; i < shapes.size(); i++) {
                cout << i << " ";
                shapes[i]->Dump();
            }
        }

        if(command == "resize") {
            cin >> row >> col;
            canvas.Resize(row, col);
        }
    }

    for(int i = 0; i < shapes.size(); i++) delete shapes[i];
    shapes.clear();

    return 0;
}