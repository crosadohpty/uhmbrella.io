/*
  ==============================================================================

    Combox.h
    Created: 15 Mar 2023 11:57:30pm
    Author:  Samuel A. Maldonado

  ==============================================================================
*/

#pragma once
#include "JuceHeader.h"

using namespace juce;

class ComboxLF : public juce::LookAndFeel_V4 {
public:
    ComboxLF() {
        setColour(juce::ComboBox::backgroundColourId, juce::Colours::black);
        setColour(juce::ComboBox::textColourId, juce::Colours::white);
    }
    void drawCombox(juce::ComboBox & combobox, juce::Graphics & g,
        int x, int y, int width, int height, bool isButtonDown);
    void drawPopupMenuItem(Graphics&, const Rectangle<int>& area,
        bool isSeparator, bool isActive, bool isHighlighted, bool isTicked, bool hasSubMenu,
        const String& text, const String& shortcutKeyText,
        const Drawable* icon, const Colour* textColour);
};