#pragma once
#include <p6/p6.h>

void fenetre()
{
    auto ctx   = p6::Context{};
    ctx.update = [&]() {
        ctx.background({0.2f, 0.1f, 0.3f});
        ctx.stroke        = p6::Color{1.f, 1.f, 1.f, 0.75f};
        ctx.stroke_weight = 0.015f;
        ctx.line(glm::vec2{-0.5f,-1.f}, glm::vec2{-0.5f,1.f});
        ctx.line(glm::vec2{0.5f,-1.f}, glm::vec2{0.5f,1.f});
        ctx.line(glm::vec2{-1.5f,0.4f}, glm::vec2{1.5f,0.4f});
        ctx.line(glm::vec2{-1.5f,-0.4f}, glm::vec2{1.5f,-0.4f});
    };
    ctx.start();
}