#pragma once
#include <p6/p6.h>

struct Tile {
    float position_x;
    float position_y;

    bool IsFilled = 0;
    char Sign_in_tile;
};

struct Noughs_and_crosses_array{
    std::array<Tile,9> Tile_list[3][3];
    int Number_of_Tiles = 9;
};


void fenetre()
{
    auto ctx   = p6::Context{};
    Noughs_and_crosses_array Game;
    ctx.update = [&]() {
        ctx.background({0.2f, 0.1f, 0.3f});
        ctx.stroke        = p6::Color{1.f, 1.f, 1.f, 0.75f};
        ctx.stroke_weight = 0.015f;
        for(float i=-0.5; i<=0.5; i=i+0.5){
            for(float j=-0.5; j<=0.5; j=j+0.5){
                ctx.square(p6::Center{i,j},p6::Radius{0.25f});
                ctx.mouse_pressed = [&](p6::MouseButton button) {
                    ctx.read_pixel(button.position);
                    std::cout << "position en x : " << ctx.mouse()[0] << std::endl;
                    std::cout << "position en y : " << ctx.mouse()[1] << std::endl;
                };
            };
        };
        if (ctx.mouse()[0]<0.25 && ctx.mouse()[1]<0.25){
            ctx.line({0,0}, {1,-0.5});
        }
    };
    ctx.start();
}