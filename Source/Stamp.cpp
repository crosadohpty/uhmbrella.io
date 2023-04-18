/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 7.0.5

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
#include "ComboxLF.h"
#include "SampleItem.h"
//[/Headers]

#include "Stamp.h"
#include "Summary.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...

//[/MiscUserDefs]

//==============================================================================
Stamp::Stamp ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    collectionname.reset (new juce::TextEditor ("collectionname"));
    addAndMakeVisible (collectionname.get());
    collectionname->setMultiLine (false);
    collectionname->setReturnKeyStartsNewLine (false);
    collectionname->setReadOnly (false);
    collectionname->setScrollbarsShown (true);
    collectionname->setCaretVisible (true);
    collectionname->setPopupMenuEnabled (true);
    collectionname->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    collectionname->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0xffdfdfdf));
    collectionname->setText (juce::String());

    collectionname->setBounds (96, 32, 160, 24);

    description.reset (new juce::TextEditor ("description"));
    addAndMakeVisible (description.get());
    description->setMultiLine (true);
    description->setReturnKeyStartsNewLine (false);
    description->setReadOnly (false);
    description->setScrollbarsShown (true);
    description->setCaretVisible (true);
    description->setPopupMenuEnabled (true);
    description->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    description->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0xffdfdfdf));
    description->setText (juce::String());

    description->setBounds (96, 64, 160, 152);

    samplename.reset (new juce::TextEditor ("samplename"));
    addAndMakeVisible (samplename.get());
    samplename->setMultiLine (false);
    samplename->setReturnKeyStartsNewLine (false);
    samplename->setReadOnly (false);
    samplename->setScrollbarsShown (true);
    samplename->setCaretVisible (true);
    samplename->setPopupMenuEnabled (true);
    samplename->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    samplename->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0xffdfdfdf));
    samplename->setText (juce::String());

    samplename->setBounds (272, 224, 152, 24);

    instrumentbox.reset (new juce::ComboBox ("instrumentbox"));
    addAndMakeVisible (instrumentbox.get());
    instrumentbox->setTooltip (TRANS("Instrument"));
    instrumentbox->setEditableText (false);
    instrumentbox->setJustificationType (juce::Justification::centredLeft);
    instrumentbox->setTextWhenNothingSelected (TRANS("Instrument"));
    instrumentbox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    instrumentbox->addItem (TRANS("Guitar"), 1);
    instrumentbox->addItem (TRANS("Drums"), 2);
    instrumentbox->addItem (TRANS("Synth"), 3);
    instrumentbox->addItem (TRANS("Other"), 4);
    instrumentbox->addListener (this);

    instrumentbox->setBounds (272, 256, 152, 24);

    genrebox.reset (new juce::ComboBox ("genrebox"));
    addAndMakeVisible (genrebox.get());
    genrebox->setTooltip (TRANS("Genre\n"));
    genrebox->setEditableText (false);
    genrebox->setJustificationType (juce::Justification::centredLeft);
    genrebox->setTextWhenNothingSelected (TRANS("Genre"));
    genrebox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    genrebox->addItem (TRANS("Rock"), 1);
    genrebox->addItem (TRANS("Classical"), 2);
    genrebox->addItem (TRANS("EDM"), 3);
    genrebox->addItem (TRANS("R&B"), 4);
    genrebox->addSeparator();
    genrebox->addListener (this);

    genrebox->setBounds (96, 288, 160, 24);

    license.reset (new juce::ComboBox ("license"));
    addAndMakeVisible (license.get());
    license->setTooltip (TRANS("License"));
    license->setEditableText (false);
    license->setJustificationType (juce::Justification::centredLeft);
    license->setTextWhenNothingSelected (TRANS("Licensing"));
    license->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    license->addItem (TRANS("MIT"), 1);
    license->addItem (TRANS("GNU"), 2);
    license->addItem (TRANS("Other"), 3);
    license->addSeparator();
    license->addListener (this);

    license->setBounds (96, 256, 160, 24);

    collectioncover.reset (new juce::ImageButton ("collectioncover"));
    addAndMakeVisible (collectioncover.get());
    collectioncover->setTooltip (TRANS("Upload an image for your collection"));
    collectioncover->setExplicitFocusOrder (1);
    collectioncover->setButtonText (TRANS("new button"));
    collectioncover->addListener (this);

    collectioncover->setImages (false, true, false,
                                juce::ImageCache::getFromMemory (placeholderimage_png, placeholderimage_pngSize), 1.000f, juce::Colour (0x00ffebeb),
                                juce::ImageCache::getFromMemory (placeholderimage_png, placeholderimage_pngSize), 1.000f, juce::Colour (0x70000000),
                                juce::ImageCache::getFromMemory (placeholderimage_png, placeholderimage_pngSize), 1.000f, juce::Colour (0xca000000));
    collectioncover->setBounds (272, 32, 150, 150);

    BPM.reset (new juce::TextEditor ("BPM"));
    addAndMakeVisible (BPM.get());
    BPM->setTooltip (TRANS("BPM"));
    BPM->setMultiLine (false);
    BPM->setReturnKeyStartsNewLine (false);
    BPM->setReadOnly (false);
    BPM->setScrollbarsShown (true);
    BPM->setCaretVisible (true);
    BPM->setPopupMenuEnabled (true);
    BPM->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    BPM->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0xffdfdfdf));
    BPM->setText (juce::String());

    BPM->setBounds (376, 320, 48, 24);

    key.reset (new juce::ComboBox ("key"));
    addAndMakeVisible (key.get());
    key->setTooltip (TRANS("Key"));
    key->setEditableText (false);
    key->setJustificationType (juce::Justification::centredLeft);
    key->setTextWhenNothingSelected (TRANS("Key"));
    key->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    key->addItem (TRANS("Vocals"), 1);
    key->addListener (this);

    key->setBounds (272, 288, 152, 24);

    supplies.reset (new juce::TextEditor ("supplies"));
    addAndMakeVisible (supplies.get());
    supplies->setTooltip (TRANS("Supplies"));
    supplies->setMultiLine (false);
    supplies->setReturnKeyStartsNewLine (false);
    supplies->setReadOnly (false);
    supplies->setScrollbarsShown (true);
    supplies->setCaretVisible (true);
    supplies->setPopupMenuEnabled (true);
    supplies->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    supplies->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0xffdfdfdf));
    supplies->setText (juce::String());

    supplies->setBounds (160, 224, 96, 24);

    fees.reset (new juce::TextEditor ("fees"));
    addAndMakeVisible (fees.get());
    fees->setTooltip (TRANS("Fees"));
    fees->setMultiLine (false);
    fees->setReturnKeyStartsNewLine (false);
    fees->setReadOnly (false);
    fees->setScrollbarsShown (true);
    fees->setCaretVisible (true);
    fees->setPopupMenuEnabled (true);
    fees->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    fees->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0xffdfdfdf));
    fees->setText (juce::String());

    fees->setBounds (96, 224, 48, 24);

    deploycollection.reset (new juce::TextButton ("deploycollection"));
    addAndMakeVisible (deploycollection.get());
    deploycollection->setButtonText (TRANS("Deploy Collection"));
    deploycollection->addListener (this);
    deploycollection->setColour (juce::TextButton::buttonColourId, juce::Colours::black);

    deploycollection->setBounds (96, 320, 160, 24);

    addsample.reset (new juce::TextButton ("addsample"));
    addAndMakeVisible (addsample.get());
    addsample->setTooltip (TRANS("Adds the sample to the current collection"));
    addsample->setButtonText (TRANS("Add Sample"));
    addsample->addListener (this);
    addsample->setColour (juce::TextButton::buttonColourId, juce::Colours::black);

    addsample->setBounds (272, 320, 96, 24);

    backbutton.reset (new juce::ImageButton ("backbutton"));
    addAndMakeVisible (backbutton.get());
    backbutton->setButtonText (TRANS("new button"));
    backbutton->addListener (this);

    backbutton->setImages (false, true, true,
                           juce::ImageCache::getFromMemory (uhmbrellaBack_png, uhmbrellaBack_pngSize), 1.000f, juce::Colour (0x00000000),
                           juce::Image(), 1.000f, juce::Colour (0x00000000),
                           juce::Image(), 1.000f, juce::Colour (0x00000000));
    backbutton->setBounds (24, 24, 64, 40);

    summary.reset (new juce::Viewport ("summary"));
    addAndMakeVisible (summary.get());
    summary->setScrollBarsShown (true, false);
    summary->setViewedComponent (new Summary());

    summary->setBounds (440, 72, 296, 272);

    choosesample.reset (new juce::TextButton ("choosesample"));
    addAndMakeVisible (choosesample.get());
    choosesample->setButtonText (TRANS("Choose Sample"));
    choosesample->addListener (this);
    choosesample->setColour (juce::TextButton::buttonColourId, juce::Colours::black);

    choosesample->setBounds (272, 192, 152, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (800, 400);


    //[Constructor] You can add your own custom stuff here..
    setSize(800,400);
    key->setLookAndFeel(new ComboxLF());
    instrumentbox->setLookAndFeel(new ComboxLF());
    license->setLookAndFeel(new ComboxLF());
    genrebox->setLookAndFeel(new ComboxLF());
    samplename->setTextToShowWhenEmpty("Sample Name", Colours::grey);
    description->setTextToShowWhenEmpty("Description", Colours::grey);
    collectionname->setTextToShowWhenEmpty("Collection Name", Colours::grey);
    fees->setTextToShowWhenEmpty("Fees", Colours::grey);
    supplies->setTextToShowWhenEmpty("Supplies", Colours::grey);
    BPM->setTextToShowWhenEmpty("BPM", Colours::grey);



    //[/Constructor]
}

Stamp::~Stamp()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    collectionname = nullptr;
    description = nullptr;
    samplename = nullptr;
    instrumentbox = nullptr;
    genrebox = nullptr;
    license = nullptr;
    collectioncover = nullptr;
    BPM = nullptr;
    key = nullptr;
    supplies = nullptr;
    fees = nullptr;
    deploycollection = nullptr;
    addsample = nullptr;
    backbutton = nullptr;
    summary = nullptr;
    choosesample = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Stamp::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colours::black);

    {
        int x = 440, y = 32, width = 296, height = 32;
        juce::Colour fillColour = juce::Colour (0xff111111);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 444, y = 32, width = 284, height = 32;
        juce::String text (TRANS("Summary"));
        juce::Colour fillColour = juce::Colour (0xffcdcdcd);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font ("Calibri", 25.70f, juce::Font::plain).withTypefaceStyle ("Bold").withExtraKerningFactor (0.005f));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Stamp::resized()
{
    //[UserPreResize] Add your own custom resize code here..

    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Stamp::comboBoxChanged (juce::ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == instrumentbox.get())
    {
        //[UserComboBoxCode_instrumentbox] -- add your combo box handling code here..
        if (instrumentbox->getSelectedItemIndex() != 0) {
            valInstrumentBox = instrumentbox->getItemText(instrumentbox->getSelectedItemIndex());
        }
        //[/UserComboBoxCode_instrumentbox]
    }
    else if (comboBoxThatHasChanged == genrebox.get())
    {
        //[UserComboBoxCode_genrebox] -- add your combo box handling code here..
        if (instrumentbox->getSelectedItemIndex() != 0) {
            valGenre = genrebox->getItemText(genrebox->getSelectedItemIndex());
        }
        //[/UserComboBoxCode_genrebox]
    }
    else if (comboBoxThatHasChanged == license.get())
    {
        //[UserComboBoxCode_license] -- add your combo box handling code here..
        if (instrumentbox->getSelectedItemIndex() != 0) {
            valLicense = license->getItemText(license->getSelectedItemIndex());
        }
        //[/UserComboBoxCode_license]
    }
    else if (comboBoxThatHasChanged == key.get())
    {
        //[UserComboBoxCode_key] -- add your combo box handling code here..
        if (instrumentbox->getSelectedItemIndex() != 0) {
            valKey = key->getItemText(key->getSelectedItemIndex());
        }
        //[/UserComboBoxCode_key]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void Stamp::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == collectioncover.get())
    {
        //[UserButtonCode_collectioncover] -- add your button handler code here..
        juce::FileChooser chooser("Select an image as cover for your sample", File::getSpecialLocation(File::userHomeDirectory), "*.jpg;*.jpeg;*.png");
        if (chooser.browseForFileToOpen()) {
            File selected = chooser.getResult();
            newCover = ImageFileFormat::loadFrom(selected);
            collectioncover->setImages(false, true, true,
                newCover, 1.0f, {},
                newCover, 0.7f, {},
                newCover, 0.3f, {}
            );
        }
        //[/UserButtonCode_collectioncover]
    }
    else if (buttonThatWasClicked == deploycollection.get())
    {
        //[UserButtonCode_deploycollection] -- add your button handler code here..
        //Take in the other data for the collection
        valDescription = description->getText();
        valCollectionName = collectionname->getText();

        for (auto S : samples) {
            //Add samples to the collection here (The JSON payload object)
        }
        collectionname->clear();
        valCollectionName = "";
        description->clear();
        valDescription = "";
        clearSampleValues();
        //[/UserButtonCode_deploycollection]
    }
    else if (buttonThatWasClicked == addsample.get())
    {
        //[UserButtonCode_addsample] -- add your button handler code here..
        if (allSpecsProvided()) {
            samples.add(new SampleItem(valSampleName, valInstrumentBox, valKey, newCover, valBPM.getIntValue(), sampleFile));
            clearSampleValues();
        }
        else {
            juce::AlertWindow::showMessageBox(juce::MessageBoxIconType::InfoIcon, "Error", "Please fill in all the fields to add your sample");
        }
        //[/UserButtonCode_addsample]
    }
    else if (buttonThatWasClicked == backbutton.get())
    {
        //[UserButtonCode_backbutton] -- add your button handler code here..
        goback = true;
        clearSampleValues();
        //[/UserButtonCode_backbutton]
    }
    else if (buttonThatWasClicked == choosesample.get())
    {
        //[UserButtonCode_choosesample] -- add your button handler code here..
        juce::FileChooser chooser("Select your sample", File::getSpecialLocation(File::userHomeDirectory), "*.mp4;*.mp3;*.wav");
        if (chooser.browseForFileToOpen()) {
            File selected = chooser.getResult();
            sampleFile = selected;
        }
        //[/UserButtonCode_choosesample]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void Stamp::clearSampleValues() {
    instrumentbox->setSelectedItemIndex(-1);
    valInstrumentBox = "";
    key->setSelectedItemIndex(-1);
    valKey = "";
    BPM->clear();
    valBPM = "";
    samplename->clear();
    valSampleName = "";
    license->clear();
    valLicense = "";
    collectioncover->setImages(false, true, true,
        juce::ImageCache::getFromMemory(placeholderimage_png, placeholderimage_pngSize), 1.0f, {},
        juce::ImageCache::getFromMemory(placeholderimage_png, placeholderimage_pngSize), 0.7f, {},
        juce::ImageCache::getFromMemory(placeholderimage_png, placeholderimage_pngSize), 0.3f, {}
    );
    if (!keepImg) {
        newCover = juce::Image();
    }
    sampleFile = juce::File();
}

bool Stamp::allSpecsProvided() {
    bool InsCk = valInstrumentBox != "";
    bool KeyCk = valKey != "";
    bool BPMCk = valBPM != "";
    bool coverCk = !newCover.isNull();
    bool SCk1 = sampleFile.exists();
    bool SCk2 = sampleFile.getSize() > 0;

    if  (

            InsCk ||
            KeyCk ||
            BPMCk ||
            coverCk ||
            (SCk1 && SCk2)
        )
    {return true;}
    else { return true; }

}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Stamp" componentName="" parentClasses="public juce::Component"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="800"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ff000000">
    <RECT pos="440 32 296 32" fill="solid: ff111111" hasStroke="0"/>
    <TEXT pos="444 32 284 32" fill="solid: ffcdcdcd" hasStroke="0" text="Summary"
          fontname="Calibri" fontsize="25.7" kerning="0.005" bold="1" italic="0"
          justification="36" typefaceStyle="Bold"/>
  </BACKGROUND>
  <TEXTEDITOR name="collectionname" id="b2fc112f9d4d08f9" memberName="collectionname"
              virtualName="" explicitFocusOrder="0" pos="96 32 160 24" textcol="ff000000"
              bkgcol="ffdfdfdf" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="description" id="9645bcad0d071c4f" memberName="description"
              virtualName="" explicitFocusOrder="0" pos="96 64 160 152" textcol="ff000000"
              bkgcol="ffdfdfdf" initialText="" multiline="1" retKeyStartsLine="0"
              readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="samplename" id="9f0aea33c4b3ade1" memberName="samplename"
              virtualName="" explicitFocusOrder="0" pos="272 224 152 24" textcol="ff000000"
              bkgcol="ffdfdfdf" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <COMBOBOX name="instrumentbox" id="7a17cc442baf9b2b" memberName="instrumentbox"
            virtualName="" explicitFocusOrder="0" pos="272 256 152 24" tooltip="Instrument"
            editable="0" layout="33" items="Guitar&#10;Drums&#10;Synth&#10;Other"
            textWhenNonSelected="Instrument" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="genrebox" id="c3e1e1d99ecb30e3" memberName="genrebox" virtualName=""
            explicitFocusOrder="0" pos="96 288 160 24" tooltip="Genre&#10;"
            editable="0" layout="33" items="Rock&#10;Classical&#10;EDM&#10;R&amp;B&#10;"
            textWhenNonSelected="Genre" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="license" id="204782e89b5fb281" memberName="license" virtualName=""
            explicitFocusOrder="0" pos="96 256 160 24" tooltip="License"
            editable="0" layout="33" items="MIT&#10;GNU&#10;Other&#10;" textWhenNonSelected="Licensing"
            textWhenNoItems="(no choices)"/>
  <IMAGEBUTTON name="collectioncover" id="83eb662feef1cc65" memberName="collectioncover"
               virtualName="" explicitFocusOrder="1" pos="272 32 150 150" tooltip="Upload an image for your collection"
               buttonText="new button" connectedEdges="0" needsCallback="1"
               radioGroupId="0" keepProportions="0" resourceNormal="placeholderimage_png"
               opacityNormal="1.0" colourNormal="ffebeb" resourceOver="placeholderimage_png"
               opacityOver="1.0" colourOver="70000000" resourceDown="placeholderimage_png"
               opacityDown="1.0" colourDown="ca000000"/>
  <TEXTEDITOR name="BPM" id="76bca15bf4a98797" memberName="BPM" virtualName=""
              explicitFocusOrder="0" pos="376 320 48 24" tooltip="BPM" textcol="ff000000"
              bkgcol="ffdfdfdf" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <COMBOBOX name="key" id="9df3ca689371dc09" memberName="key" virtualName=""
            explicitFocusOrder="0" pos="272 288 152 24" tooltip="Key" editable="0"
            layout="33" items="Vocals" textWhenNonSelected="Key" textWhenNoItems="(no choices)"/>
  <TEXTEDITOR name="supplies" id="b962305b1ce0f3a1" memberName="supplies" virtualName=""
              explicitFocusOrder="0" pos="160 224 96 24" tooltip="Supplies"
              textcol="ff000000" bkgcol="ffdfdfdf" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="fees" id="aded718a0649bd5e" memberName="fees" virtualName=""
              explicitFocusOrder="0" pos="96 224 48 24" tooltip="Fees" textcol="ff000000"
              bkgcol="ffdfdfdf" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTBUTTON name="deploycollection" id="c19cbb6782f6be0c" memberName="deploycollection"
              virtualName="" explicitFocusOrder="0" pos="96 320 160 24" bgColOff="ff000000"
              buttonText="Deploy Collection" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <TEXTBUTTON name="addsample" id="4a086f00f824d5f" memberName="addsample"
              virtualName="" explicitFocusOrder="0" pos="272 320 96 24" tooltip="Adds the sample to the current collection"
              bgColOff="ff000000" buttonText="Add Sample" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <IMAGEBUTTON name="backbutton" id="7dd37693396f25f8" memberName="backbutton"
               virtualName="" explicitFocusOrder="0" pos="24 24 64 40" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="uhmbrellaBack_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="" opacityOver="1.0" colourOver="0" resourceDown=""
               opacityDown="1.0" colourDown="0"/>
  <VIEWPORT name="summary" id="31cf8577736c3920" memberName="summary" virtualName=""
            explicitFocusOrder="0" pos="440 72 296 272" vscroll="1" hscroll="0"
            scrollbarThickness="8" contentType="1" jucerFile="Summary.cpp"
            contentClass="" constructorParams=""/>
  <TEXTBUTTON name="choosesample" id="b3ee585ef95d2427" memberName="choosesample"
              virtualName="" explicitFocusOrder="0" pos="272 192 152 24" bgColOff="ff000000"
              buttonText="Choose Sample" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: uhmbrellaBack_png, 9852, "../../../../../Users/Samuel A. Maldonado/Downloads/UhmbrellaBack.png"
static const unsigned char resource_Stamp_uhmbrellaBack_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,225,0,0,0,225,8,3,0,0,0,9,109,34,72,0,0,20,73,122,84,88,116,82,97,119,32,112,114,111,
102,105,108,101,32,116,121,112,101,32,101,120,105,102,0,0,120,218,173,154,103,118,27,59,182,133,255,99,20,61,4,228,48,28,132,131,181,222,12,222,240,251,219,69,73,206,87,246,117,75,150,72,147,165,2,112,
194,14,0,157,253,255,255,93,247,31,190,74,31,209,229,210,122,29,181,122,190,242,200,35,78,158,116,255,250,154,207,239,224,243,243,251,249,178,183,71,254,255,205,235,238,227,141,200,75,137,199,244,250,
111,175,111,215,191,191,254,229,6,175,135,201,179,242,213,141,250,126,123,99,125,251,198,200,111,247,239,223,221,40,190,30,146,102,164,231,231,237,70,227,237,70,41,190,222,8,111,55,152,175,101,249,58,
122,251,122,9,203,94,143,111,127,255,10,3,63,78,191,114,255,118,218,63,252,191,17,189,83,24,39,197,104,41,36,207,239,148,226,107,2,73,63,201,165,201,147,244,252,110,186,144,239,201,165,237,249,253,126,
51,2,242,179,56,125,124,13,102,116,53,213,252,211,139,190,201,202,199,179,240,243,215,221,247,217,202,241,237,146,244,93,144,235,199,227,79,95,119,161,124,247,70,250,24,39,126,61,114,238,111,207,226,183,
175,175,26,202,107,70,223,69,95,63,247,158,126,159,53,179,138,153,43,161,174,111,139,250,136,154,158,112,221,98,8,13,221,29,83,171,190,241,83,184,69,123,190,7,223,157,170,222,148,194,241,219,47,190,119,
24,33,18,253,27,114,56,97,134,27,236,121,220,97,51,197,28,205,69,114,21,99,220,49,61,47,118,114,55,226,38,135,33,101,125,135,27,91,26,233,164,78,62,247,147,246,156,226,199,92,194,51,236,240,219,61,163,
117,70,62,129,75,99,224,102,225,41,130,63,252,118,127,250,7,247,170,21,66,240,253,35,86,204,43,70,5,155,105,40,115,250,205,101,100,36,220,183,160,150,39,192,239,223,223,127,41,175,137,12,22,69,89,45,50,
8,236,122,221,98,149,240,5,9,210,147,232,196,133,133,199,87,15,134,118,222,110,64,136,24,186,48,153,144,200,0,89,11,169,132,26,124,139,177,133,64,32,59,9,154,76,61,166,28,23,25,8,165,196,195,36,99,78,
169,146,155,30,53,52,127,210,194,115,105,44,145,151,29,175,3,102,100,162,164,74,135,117,50,52,73,86,206,133,250,105,185,83,67,179,164,146,75,41,181,180,210,203,40,179,166,154,107,169,181,182,42,80,156,
45,181,236,90,105,181,181,214,219,104,179,167,158,123,233,181,183,222,251,232,115,196,145,0,205,50,234,104,163,143,49,230,100,204,201,157,39,127,61,185,96,206,21,87,90,121,21,183,234,106,171,175,177,230,
166,124,118,222,101,215,221,118,223,99,207,19,79,58,224,199,169,167,157,126,198,153,22,140,82,178,108,197,170,53,235,54,108,94,74,237,38,119,243,45,183,222,118,251,29,119,126,100,237,45,173,63,124,255,
65,214,194,91,214,226,147,41,93,216,62,178,198,171,173,189,223,34,8,78,138,114,70,194,96,145,64,198,155,82,64,65,71,229,204,247,144,115,84,230,148,51,63,128,191,84,34,147,44,202,217,9,202,24,25,204,22,
98,185,225,61,119,46,190,50,170,204,253,85,222,92,203,223,228,45,254,219,204,57,165,238,15,51,247,99,222,126,150,181,35,26,218,79,198,94,93,168,160,250,68,247,113,205,140,157,127,112,213,143,143,238,87,
111,188,61,146,207,190,54,83,206,125,239,209,66,218,13,238,181,89,14,221,95,122,107,199,210,190,254,84,8,178,23,107,167,84,175,165,131,169,7,152,221,179,123,248,104,198,69,195,101,82,83,198,237,52,95,
29,115,3,190,76,207,70,92,132,187,228,123,82,58,149,202,182,127,156,208,239,63,186,95,189,81,247,136,49,147,64,102,24,103,55,116,74,101,53,240,45,175,216,89,5,209,112,82,57,121,143,144,235,58,174,140,
109,190,84,32,13,138,178,179,109,197,27,55,212,202,74,35,11,93,49,175,61,114,51,59,25,192,190,177,95,163,112,149,45,18,94,151,133,176,210,101,105,241,152,145,227,76,57,28,243,105,148,186,102,226,95,223,
52,99,139,92,3,155,83,153,97,87,11,250,99,175,118,18,77,135,178,109,122,235,99,18,187,195,141,118,174,198,203,173,68,202,196,223,23,39,173,75,163,143,18,150,245,50,207,185,251,196,118,169,226,181,69,72,
107,100,178,87,250,108,163,182,112,118,74,193,17,10,200,234,164,112,108,81,173,132,40,141,157,175,207,183,87,238,96,148,31,5,152,79,159,214,55,65,162,173,238,232,103,195,152,155,26,76,126,156,197,162,
155,11,172,193,66,201,39,183,187,99,205,215,40,107,191,27,252,215,179,29,63,215,110,112,88,215,114,14,61,118,210,186,104,163,185,198,164,184,151,205,48,87,46,198,140,214,147,15,67,74,210,25,100,1,156,
244,0,114,132,236,215,90,167,244,206,31,35,199,146,209,75,167,210,5,129,197,114,123,244,70,15,132,253,180,58,103,87,29,33,2,200,147,207,165,50,1,72,118,87,240,163,18,227,57,249,229,11,237,95,36,228,248,
245,235,71,247,217,5,191,120,4,65,86,152,59,183,73,36,122,103,70,188,176,70,55,170,142,248,174,109,135,136,101,168,147,72,207,13,84,116,234,223,26,75,30,61,130,101,162,173,109,13,226,79,68,105,183,107,
59,175,117,131,119,171,143,75,179,213,188,98,165,106,1,190,78,134,122,33,44,86,81,93,36,126,215,68,92,199,30,190,165,82,111,158,199,247,185,15,64,81,230,186,3,44,35,4,176,136,249,189,215,40,139,130,24,
53,249,54,209,100,6,184,160,66,36,57,170,17,67,176,179,159,72,161,233,17,112,102,210,0,102,9,18,84,79,183,54,167,5,75,20,115,147,12,48,198,54,194,165,214,35,247,188,57,100,155,123,92,20,14,195,248,219,
91,188,195,14,248,165,42,161,103,42,201,100,197,61,28,196,232,161,23,35,192,154,107,232,102,160,60,43,13,33,78,53,205,62,192,96,134,50,40,65,120,36,19,157,51,90,186,164,28,96,45,45,219,106,101,149,147,
234,113,243,145,251,221,98,41,219,223,89,138,148,250,131,2,127,246,232,62,189,112,166,97,141,180,78,223,198,4,255,200,186,223,43,164,211,153,65,1,212,32,143,158,224,126,94,3,61,7,239,197,80,73,154,217,
110,147,90,164,235,107,159,23,204,79,209,224,10,168,128,174,61,37,26,124,56,46,173,232,105,33,42,55,225,98,206,118,183,212,180,135,109,10,248,4,112,246,150,181,118,154,151,134,143,173,86,83,143,245,209,
136,43,208,48,2,210,53,102,218,116,140,53,52,85,184,129,6,154,54,92,253,25,66,238,115,26,250,56,123,48,235,148,164,155,229,68,139,149,210,143,69,129,8,162,182,47,27,35,83,186,41,147,80,135,253,192,249,
121,238,151,196,171,20,67,78,181,37,145,7,4,140,58,136,228,54,53,171,17,66,252,135,104,186,63,207,207,235,17,58,5,25,194,105,148,65,65,113,187,84,203,5,151,195,162,73,12,51,122,199,201,55,247,219,119,
43,118,105,61,48,3,182,90,232,249,155,215,97,254,64,56,148,93,39,117,104,147,174,155,147,117,102,199,91,0,224,37,252,121,52,126,78,142,0,230,52,0,113,192,124,208,65,167,191,249,163,133,68,64,84,237,112,
214,176,75,95,35,129,118,125,40,132,71,152,22,173,0,99,0,77,210,207,77,40,145,230,47,232,171,146,88,176,30,165,131,134,65,55,21,234,191,219,218,96,247,113,194,140,158,44,164,49,16,40,128,229,184,209,232,
174,210,243,62,213,54,62,131,58,99,240,57,82,191,8,92,232,249,150,134,85,92,100,222,175,141,143,168,172,207,181,128,94,233,84,208,180,211,30,62,87,66,155,49,158,233,121,190,181,80,38,36,30,17,166,36,122,
56,32,137,148,242,123,191,63,143,238,253,201,191,123,148,150,42,12,150,5,181,97,223,58,105,254,57,12,86,77,39,238,137,46,88,130,251,195,170,250,134,9,59,20,27,151,167,193,200,128,41,223,172,14,150,141,
3,13,71,105,50,163,67,203,116,184,13,237,178,161,217,36,83,198,32,32,153,180,33,29,130,127,187,208,129,20,206,231,221,15,16,65,221,97,205,133,4,164,210,15,249,158,212,86,25,161,195,214,76,137,118,88,19,
94,4,220,110,1,250,118,69,196,117,208,137,138,138,13,180,119,51,160,230,128,90,245,19,124,52,98,3,36,84,140,192,199,45,168,36,242,166,93,147,212,85,205,76,188,71,107,187,160,18,47,242,178,193,148,22,238,
170,4,155,90,3,169,201,76,172,251,166,94,65,253,40,157,229,11,18,32,22,154,156,48,146,208,39,93,6,197,225,129,130,160,155,88,99,140,113,187,42,60,110,244,215,42,107,83,239,17,197,54,78,186,59,209,124,
141,33,131,24,160,27,114,17,21,36,193,49,87,217,128,216,84,61,139,171,48,202,3,212,8,82,91,185,246,13,180,163,43,160,42,23,182,16,211,174,191,212,50,88,138,222,70,123,44,224,94,81,68,54,163,11,18,93,56,
17,74,5,243,236,97,87,159,16,245,124,163,171,126,3,179,129,61,3,159,19,140,170,160,33,197,68,79,84,157,161,75,121,15,69,177,32,17,250,186,76,84,155,131,195,82,138,80,114,15,29,189,47,43,9,124,118,33,119,
84,173,94,207,192,82,121,144,30,242,189,70,166,136,167,161,172,161,227,162,180,250,105,40,34,23,139,95,7,98,66,231,216,102,14,20,119,187,100,62,2,163,20,134,20,193,40,76,49,74,65,130,68,140,144,97,181,
243,191,82,35,185,165,205,40,96,27,93,128,65,200,142,116,128,47,4,227,30,28,48,163,205,146,163,245,9,109,65,226,79,70,176,17,19,89,124,160,33,65,37,33,166,15,80,19,11,229,84,81,47,152,128,124,156,39,229,
61,52,76,12,77,134,226,143,69,91,127,7,97,77,108,55,9,3,30,41,67,88,113,102,88,152,159,174,197,99,165,18,166,128,26,133,33,0,188,9,140,0,113,100,133,137,157,250,121,241,33,133,96,67,32,111,160,122,161,
183,121,118,12,148,74,115,204,79,130,162,230,177,49,125,151,188,192,94,117,137,16,128,239,93,139,58,151,85,171,227,152,59,194,22,113,72,128,88,54,74,73,170,103,176,156,85,93,147,110,56,160,68,167,133,
118,214,94,27,120,88,73,31,197,112,208,165,61,60,55,191,99,23,53,246,38,224,218,94,130,53,9,218,66,189,108,67,193,152,139,82,214,5,150,167,118,169,157,7,5,172,167,50,71,179,22,224,91,50,130,84,199,75,
61,124,203,93,243,162,183,31,245,223,159,128,20,153,168,229,238,10,212,211,157,254,203,176,95,13,170,253,198,47,195,50,196,143,227,190,141,234,94,195,106,35,231,125,96,188,226,215,3,127,61,236,219,168,
218,196,253,126,185,238,103,235,253,55,203,117,63,174,151,68,172,28,176,20,106,153,199,44,167,54,252,217,88,208,185,176,64,13,142,195,211,83,169,224,217,196,95,14,93,140,57,70,83,105,24,40,68,59,115,3,
85,181,49,34,197,54,98,147,170,152,123,135,78,185,107,35,153,190,227,21,220,16,144,5,42,231,167,0,76,85,54,93,152,210,240,181,97,77,146,193,133,27,182,77,104,211,211,209,106,188,212,51,90,25,227,114,191,
110,54,237,88,136,176,119,18,0,179,208,149,29,176,134,158,174,105,6,162,55,115,206,24,252,89,109,174,128,202,58,91,198,11,69,113,192,194,26,61,166,94,148,59,47,172,210,201,9,226,53,238,130,96,223,199,
173,6,180,66,138,21,202,7,112,192,68,120,178,213,40,224,161,34,123,120,52,127,67,59,163,5,215,148,235,97,217,141,68,92,224,150,245,12,234,248,142,225,162,120,28,41,98,126,121,16,7,21,238,101,16,63,161,
235,50,150,65,170,40,28,252,27,4,184,23,126,77,18,80,187,107,13,218,10,89,91,150,32,191,105,39,141,106,88,228,2,209,25,47,67,32,42,86,67,175,226,78,155,220,49,236,73,172,55,176,14,212,1,181,21,252,4,44,
32,10,86,148,51,77,73,85,65,122,152,198,105,42,174,51,16,47,216,112,32,91,254,81,213,251,148,45,33,33,19,240,127,69,17,3,181,11,146,25,4,133,209,47,245,2,151,130,170,113,195,142,83,144,197,243,169,154,
51,141,222,239,74,4,53,209,24,176,67,107,218,25,78,79,89,58,100,94,162,40,88,241,171,244,137,222,121,10,84,155,195,42,255,70,201,91,255,135,187,120,153,107,196,232,251,93,222,239,241,220,129,159,207,239,
160,53,126,76,195,253,221,60,190,76,195,253,221,60,190,76,195,253,98,30,143,86,130,226,105,230,177,0,93,76,125,29,41,168,23,65,89,56,251,194,1,197,239,98,177,99,18,232,126,147,113,107,45,35,202,252,197,
69,60,123,30,89,86,17,189,64,11,86,234,29,129,71,131,134,141,136,95,52,32,132,121,192,137,29,168,160,67,214,33,3,110,68,175,68,46,172,5,239,36,104,97,54,96,244,202,85,59,13,84,33,146,108,143,71,193,143,
208,54,186,153,241,70,44,23,78,67,30,227,6,104,21,228,211,112,187,250,131,223,197,189,149,35,197,182,218,110,150,15,12,66,37,131,62,30,141,156,194,234,72,132,8,79,214,86,145,55,103,27,54,226,65,83,180,
214,193,166,85,119,214,154,204,17,170,223,3,201,227,81,32,171,77,100,54,212,72,123,111,220,123,169,58,189,129,197,4,54,91,251,153,218,123,201,60,52,185,236,132,143,238,56,72,92,185,45,108,14,197,191,132,
41,249,135,142,5,56,224,232,65,117,183,60,129,242,76,189,35,169,113,150,248,182,212,170,206,175,204,53,184,93,210,12,211,132,215,47,75,187,93,41,99,68,23,176,188,22,57,218,8,89,25,253,208,128,166,29,175,
175,69,221,119,125,215,222,221,142,149,28,133,238,50,189,6,72,222,37,11,212,129,82,131,115,199,54,73,0,226,104,149,134,255,92,73,38,172,232,2,245,150,100,33,73,168,184,31,157,167,88,201,61,222,152,252,
108,176,144,223,6,180,9,117,81,128,0,200,174,161,177,204,2,200,133,145,19,208,209,211,118,157,228,143,68,169,96,63,243,160,158,121,67,245,16,177,11,24,236,49,89,200,163,211,13,79,148,145,233,97,60,155,
17,215,224,255,155,209,18,27,189,118,147,163,242,137,181,157,51,122,203,192,188,210,48,219,31,106,100,18,231,104,189,13,10,161,24,174,56,50,49,217,8,248,49,241,131,134,25,233,2,207,190,81,72,158,87,247,
68,19,39,242,130,180,126,118,181,112,8,0,46,234,113,224,215,40,191,133,154,158,161,160,111,130,37,92,45,126,163,132,82,18,179,70,62,55,92,194,14,84,56,86,15,208,67,66,7,143,186,164,102,144,122,8,80,44,
187,111,174,109,36,42,6,229,114,205,10,64,167,223,7,209,87,26,226,23,98,162,0,17,78,48,14,22,102,166,43,153,132,87,18,163,219,193,86,83,235,4,20,47,118,28,202,73,219,213,12,145,11,115,155,57,193,150,73,
165,169,109,140,159,68,99,227,213,104,158,36,209,50,1,144,20,113,35,107,193,107,50,161,56,108,230,25,182,8,59,104,71,106,81,240,200,204,162,13,120,164,107,124,68,13,208,16,207,162,88,58,26,114,229,72,
171,83,255,56,28,234,219,29,83,37,226,72,168,60,218,56,150,199,172,157,81,84,82,96,66,73,2,5,49,55,192,208,126,173,152,221,219,147,71,54,38,109,226,210,191,106,74,22,160,243,33,65,148,165,96,218,201,194,
100,99,173,11,70,243,110,234,17,95,6,124,80,74,128,94,40,58,60,88,56,129,74,19,230,8,192,173,24,98,211,110,239,122,142,59,117,152,129,252,160,0,80,50,128,6,192,104,151,111,141,184,22,174,141,46,222,4,
28,168,133,63,43,111,120,68,3,148,137,241,69,212,203,74,109,96,80,171,166,6,80,25,13,9,164,115,48,117,19,245,255,236,137,230,208,101,70,144,7,241,51,187,94,180,147,38,188,211,188,99,210,193,7,106,169,
53,109,249,101,132,8,77,152,205,163,210,195,118,146,75,15,135,47,48,126,104,79,125,166,218,160,117,89,177,13,3,235,136,103,90,197,178,201,114,74,0,4,73,135,182,227,153,50,195,155,105,65,239,14,94,38,233,
233,72,135,121,213,198,195,89,43,36,109,159,81,89,164,30,163,133,139,93,84,178,4,208,65,221,35,177,8,5,161,236,96,241,214,190,170,119,105,106,191,50,229,155,34,2,54,169,214,80,240,9,41,132,124,3,26,142,
215,9,210,208,206,77,185,213,176,89,200,149,174,29,68,84,225,141,104,196,68,23,80,71,121,244,115,110,133,128,58,168,168,99,144,56,75,72,131,130,48,243,84,194,204,13,199,137,134,192,94,168,227,178,135,
22,104,53,241,133,137,221,136,94,31,58,57,174,218,237,70,202,0,53,16,33,181,71,174,101,243,203,157,177,142,124,171,52,34,196,49,8,184,116,11,115,71,172,50,173,3,205,121,192,91,48,60,221,58,191,218,167,
232,8,188,130,53,243,173,227,189,21,10,143,250,58,106,157,208,181,235,64,123,203,34,161,207,168,75,87,51,1,166,128,24,167,172,97,112,52,20,127,49,104,32,93,24,192,255,208,65,204,204,130,253,0,201,1,55,
243,17,207,196,241,66,181,109,200,63,154,119,123,14,44,109,122,109,118,45,29,162,29,84,43,215,34,162,49,209,235,116,222,44,123,83,42,224,141,224,165,60,238,150,66,13,1,241,117,222,246,100,221,207,151,
165,141,200,68,227,128,22,232,101,108,26,122,174,143,210,115,242,200,201,189,150,96,153,162,102,121,40,205,56,36,180,234,232,218,131,29,43,224,218,208,200,232,7,220,75,163,47,180,35,75,154,133,254,81,
199,13,192,189,188,58,182,2,40,104,101,232,8,141,114,128,201,248,11,125,2,129,230,222,244,38,84,174,134,136,191,179,155,85,30,222,167,9,236,60,254,145,172,49,171,66,60,13,151,84,49,252,216,254,151,223,
68,3,139,35,139,10,177,87,83,140,116,40,3,206,77,132,151,150,111,213,110,195,171,86,196,13,189,86,149,147,90,231,109,16,226,178,147,196,222,224,231,40,0,199,22,144,30,117,198,6,146,50,227,73,194,105,27,
38,99,85,212,14,184,157,20,163,182,88,141,134,164,193,248,131,134,2,10,211,12,255,4,52,21,2,86,25,252,250,116,112,49,7,44,202,210,50,218,105,130,215,17,240,218,114,186,17,82,167,108,112,144,131,168,222,
35,67,140,125,251,157,141,8,220,90,190,168,40,164,14,79,208,82,153,168,143,224,90,55,156,137,182,188,22,140,176,88,156,150,240,28,75,13,160,213,102,197,227,189,35,57,180,69,57,125,139,228,149,40,230,214,
92,226,30,104,123,250,0,60,132,102,145,102,207,206,112,26,58,25,211,254,160,68,14,8,114,168,150,205,216,20,8,166,178,150,62,88,221,186,200,12,234,250,102,135,54,66,253,73,168,62,59,180,63,103,118,204,
9,148,53,137,116,163,161,90,214,185,85,94,179,67,11,100,220,83,88,29,202,70,79,174,32,35,36,51,214,78,24,71,180,76,36,81,213,9,200,232,17,201,117,22,185,91,245,215,66,194,253,15,206,68,177,152,58,23,145,
107,107,143,113,76,101,232,115,17,93,82,25,8,27,245,41,59,197,24,73,107,128,18,242,39,46,181,97,153,30,204,215,161,84,30,34,95,12,158,75,8,15,212,180,109,192,131,69,79,251,36,73,225,132,154,115,228,74,
101,102,131,220,104,120,232,194,1,123,235,234,204,10,203,14,183,78,175,141,194,108,134,85,64,162,248,4,247,164,134,218,217,77,2,44,195,98,218,223,76,80,21,213,89,128,121,66,12,148,32,107,180,11,215,180,
25,94,31,254,208,121,124,154,163,83,176,91,91,171,7,247,23,139,14,78,83,3,37,247,109,218,188,249,2,56,86,4,52,125,58,109,204,94,236,246,64,39,151,97,151,52,161,193,60,146,88,178,49,211,168,148,40,66,236,
57,121,42,58,155,189,29,55,171,93,138,150,47,235,192,162,232,108,206,105,103,161,69,125,156,12,53,160,226,106,199,207,9,135,211,203,158,48,213,39,94,57,6,96,77,27,201,71,27,160,111,53,247,53,32,186,127,
121,44,242,217,141,200,109,166,112,97,159,12,196,213,134,56,197,68,161,124,65,133,136,186,4,208,173,215,245,104,48,170,7,223,133,125,215,121,68,114,58,75,208,185,57,54,187,144,107,86,112,45,26,242,63,
108,0,179,229,34,68,172,184,174,71,15,69,237,253,208,98,144,34,234,18,47,71,49,105,91,127,78,119,130,118,92,180,71,72,203,133,85,239,222,218,50,140,88,73,156,40,2,0,155,67,126,141,203,33,31,110,223,41,
89,156,99,51,84,88,166,134,247,210,182,202,114,19,98,66,94,157,26,165,177,129,243,140,108,1,207,117,86,9,121,181,217,181,13,253,216,166,64,115,174,164,147,28,232,67,31,87,120,183,7,205,194,117,160,219,
205,58,176,166,42,43,2,56,234,152,149,217,97,62,135,62,166,53,160,240,97,232,23,104,13,194,195,15,131,164,91,74,0,1,16,16,14,68,42,67,88,142,74,192,9,33,28,165,139,77,114,167,66,233,250,36,1,152,81,30,
111,25,161,76,208,26,28,57,87,255,169,58,155,194,110,101,192,24,112,111,128,213,45,142,232,150,232,59,165,143,68,4,161,130,13,245,128,149,199,35,227,145,128,147,231,163,21,104,116,202,10,237,95,17,23,
212,122,27,157,21,103,242,179,117,148,139,241,51,156,39,67,182,122,255,229,78,242,243,232,158,162,151,231,143,141,230,224,233,115,128,159,245,225,176,251,182,141,55,167,4,8,242,192,147,134,243,236,232,
105,55,161,61,123,150,229,201,67,201,78,71,55,175,207,56,32,228,120,106,250,224,65,80,255,166,215,86,226,236,100,77,231,229,225,188,206,34,75,237,207,134,98,15,247,217,74,44,10,69,112,175,62,188,31,19,
2,241,222,166,164,79,198,60,147,250,199,41,113,213,51,41,167,210,125,77,234,135,41,249,215,164,180,177,58,159,143,50,124,76,236,125,90,111,147,146,24,112,207,188,202,223,71,202,189,66,245,247,145,114,
229,235,41,253,69,164,220,71,254,122,201,146,114,200,136,231,211,39,255,16,218,240,179,185,187,175,38,15,42,119,32,33,106,115,118,235,84,208,232,116,12,203,111,45,219,125,94,33,191,183,108,247,121,133,
252,94,129,184,207,43,228,247,10,196,253,110,47,125,22,41,247,187,189,244,89,164,220,239,246,210,103,145,114,191,219,75,159,69,202,253,1,234,220,139,242,115,255,5,236,81,28,125,54,91,244,122,0,0,1,132,
105,67,67,80,73,67,67,32,112,114,111,102,105,108,101,0,0,120,156,125,145,61,72,195,64,28,197,95,83,165,69,42,14,118,16,113,200,80,59,89,16,21,113,148,86,44,130,133,210,86,104,213,193,228,210,47,104,210,
144,164,184,56,10,174,5,7,63,22,171,14,46,206,186,58,184,10,130,224,7,136,171,139,147,162,139,148,248,191,164,208,34,198,131,227,126,188,187,247,184,123,7,8,173,26,83,205,190,73,64,213,44,35,147,140,139,
249,194,170,24,120,133,31,65,8,8,33,42,49,83,79,101,23,115,240,28,95,247,240,241,245,46,198,179,188,207,253,57,6,149,162,201,0,159,72,60,207,116,195,34,222,32,158,221,180,116,206,251,196,97,86,145,20,
226,115,226,9,131,46,72,252,200,117,217,229,55,206,101,135,5,158,25,54,114,153,4,113,152,88,44,247,176,220,195,172,98,168,196,51,196,17,69,213,40,95,200,187,172,112,222,226,172,214,26,172,115,79,254,194,
80,81,91,201,114,157,230,24,146,88,66,10,105,136,144,209,64,21,53,88,136,209,170,145,98,34,67,251,113,15,255,168,227,79,147,75,38,87,21,140,28,11,168,67,133,228,248,193,255,224,119,183,102,105,122,202,
77,10,197,129,254,23,219,254,24,7,2,187,64,187,105,219,223,199,182,221,62,1,252,207,192,149,214,245,215,91,192,220,39,233,205,174,22,57,2,134,182,129,139,235,174,38,239,1,151,59,192,200,147,46,25,146,
35,249,105,10,165,18,240,126,70,223,84,0,134,111,129,129,53,183,183,206,62,78,31,128,28,117,181,124,3,28,28,2,209,50,101,175,123,188,59,216,219,219,191,103,58,253,253,0,46,240,114,140,129,62,54,35,0,0,
13,118,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,
67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,10,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,
32,120,58,120,109,112,116,107,61,34,88,77,80,32,67,111,114,101,32,52,46,52,46,48,45,69,120,105,118,50,34,62,10,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,
58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,10,32,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,
111,110,32,114,100,102,58,97,98,111,117,116,61,34,34,10,32,32,32,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,
49,46,48,47,109,109,47,34,10,32,32,32,32,120,109,108,110,115,58,115,116,69,118,116,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,
101,47,82,101,115,111,117,114,99,101,69,118,101,110,116,35,34,10,32,32,32,32,120,109,108,110,115,58,100,99,61,34,104,116,116,112,58,47,47,112,117,114,108,46,111,114,103,47,100,99,47,101,108,101,109,101,
110,116,115,47,49,46,49,47,34,10,32,32,32,32,120,109,108,110,115,58,71,73,77,80,61,34,104,116,116,112,58,47,47,119,119,119,46,103,105,109,112,46,111,114,103,47,120,109,112,47,34,10,32,32,32,32,120,109,
108,110,115,58,116,105,102,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,116,105,102,102,47,49,46,48,47,34,10,32,32,32,32,120,109,108,110,115,58,120,109,112,61,34,104,
116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,10,32,32,32,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,61,34,103,105,109,112,58,100,111,99,
105,100,58,103,105,109,112,58,48,54,97,50,52,51,54,48,45,48,55,53,99,45,52,102,55,49,45,98,100,49,100,45,54,50,51,98,52,52,50,52,100,102,55,50,34,10,32,32,32,120,109,112,77,77,58,73,110,115,116,97,110,
99,101,73,68,61,34,120,109,112,46,105,105,100,58,101,97,51,99,55,98,99,101,45,97,99,101,100,45,52,56,48,102,45,56,51,53,53,45,48,57,97,52,54,51,54,102,49,55,99,56,34,10,32,32,32,120,109,112,77,77,58,79,
114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,56,50,55,53,97,54,99,48,45,102,99,53,102,45,52,97,54,54,45,97,56,57,52,45,49,56,53,101,53,50,49,55,101,
98,98,56,34,10,32,32,32,100,99,58,70,111,114,109,97,116,61,34,105,109,97,103,101,47,112,110,103,34,10,32,32,32,71,73,77,80,58,65,80,73,61,34,50,46,48,34,10,32,32,32,71,73,77,80,58,80,108,97,116,102,111,
114,109,61,34,87,105,110,100,111,119,115,34,10,32,32,32,71,73,77,80,58,84,105,109,101,83,116,97,109,112,61,34,49,54,55,56,50,52,49,56,51,56,55,57,52,49,56,51,34,10,32,32,32,71,73,77,80,58,86,101,114,115,
105,111,110,61,34,50,46,49,48,46,51,50,34,10,32,32,32,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,61,34,49,34,10,32,32,32,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,61,34,
71,73,77,80,32,50,46,49,48,34,10,32,32,32,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,61,34,50,48,50,51,58,48,51,58,48,55,84,50,50,58,49,55,58,49,48,45,48,52,58,48,48,34,10,32,32,32,120,109,
112,58,77,111,100,105,102,121,68,97,116,101,61,34,50,48,50,51,58,48,51,58,48,55,84,50,50,58,49,55,58,49,48,45,48,52,58,48,48,34,62,10,32,32,32,60,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,
32,32,32,32,60,114,100,102,58,83,101,113,62,10,32,32,32,32,32,60,114,100,102,58,108,105,10,32,32,32,32,32,32,115,116,69,118,116,58,97,99,116,105,111,110,61,34,115,97,118,101,100,34,10,32,32,32,32,32,32,
115,116,69,118,116,58,99,104,97,110,103,101,100,61,34,47,34,10,32,32,32,32,32,32,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,52,101,48,54,54,50,52,102,
45,100,49,53,53,45,52,100,52,48,45,98,97,57,50,45,57,102,51,52,48,102,101,99,48,52,99,98,34,10,32,32,32,32,32,32,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,61,34,71,105,109,
112,32,50,46,49,48,32,40,87,105,110,100,111,119,115,41,34,10,32,32,32,32,32,32,115,116,69,118,116,58,119,104,101,110,61,34,50,48,50,51,45,48,51,45,48,55,84,50,50,58,49,55,58,49,56,34,47,62,10,32,32,32,
32,60,47,114,100,102,58,83,101,113,62,10,32,32,32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,10,32,60,47,114,100,
102,58,82,68,70,62,10,60,47,120,58,120,109,112,109,101,116,97,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,60,63,120,112,97,
99,107,101,116,32,101,110,100,61,34,119,34,63,62,91,49,177,29,0,0,0,126,80,76,84,69,0,0,0,255,255,255,0,0,0,37,37,37,196,196,196,234,234,234,238,238,238,208,208,208,248,248,248,251,251,251,114,114,114,
213,213,213,204,204,204,89,89,89,221,221,221,200,200,200,60,60,60,176,176,176,68,68,68,55,55,55,148,148,148,45,45,45,80,80,80,191,191,191,180,180,180,139,139,139,125,125,125,23,23,23,137,137,137,73,73,
73,12,12,12,34,34,34,84,84,84,95,95,95,103,103,103,155,155,155,20,20,20,165,165,165,128,128,128,109,109,109,227,227,227,160,160,160,205,75,119,150,0,0,0,1,116,82,78,83,0,64,230,216,102,0,0,0,1,98,75,71,
68,0,136,5,29,72,0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,156,24,0,0,0,7,116,73,77,69,7,231,3,8,2,17,18,230,101,85,147,0,0,2,16,73,68,65,84,120,218,237,219,65,110,195,48,16,4,193,153,255,127,
58,200,41,64,110,113,44,115,183,217,253,0,9,101,18,162,68,194,137,153,153,153,153,153,217,170,250,29,91,135,5,246,39,56,15,8,236,175,232,190,194,121,48,96,203,22,22,14,44,28,216,178,133,133,3,123,49,176,
116,31,31,88,186,15,32,164,3,91,184,80,224,118,97,225,194,22,46,20,184,93,88,186,176,116,97,233,194,210,133,165,11,75,23,150,46,44,93,88,133,219,133,165,11,75,23,150,46,172,194,237,194,210,133,85,184,
157,88,186,176,10,183,19,75,23,86,225,118,98,21,110,39,86,225,118,98,21,110,39,86,225,118,98,75,39,150,78,172,194,245,196,210,137,45,157,88,58,177,165,19,241,67,24,129,10,175,122,146,186,220,11,84,232,
91,247,157,95,78,14,161,31,191,247,8,29,66,135,80,161,66,55,187,29,66,133,78,82,133,10,21,42,84,120,253,89,204,163,225,129,175,41,187,47,190,240,143,198,22,111,44,223,120,1,113,211,122,248,191,27,45,89,
241,207,47,28,31,124,71,225,190,181,157,94,26,63,72,4,239,211,188,118,175,85,59,81,71,95,111,62,250,73,68,62,122,114,16,239,28,68,133,211,182,106,78,126,72,41,220,63,77,203,23,22,63,77,47,16,118,166,112,
27,81,225,211,251,110,124,97,7,174,22,203,136,3,132,29,55,73,151,253,117,109,198,81,212,180,73,186,138,56,230,196,116,216,16,62,114,20,133,23,14,3,102,23,176,57,79,156,7,12,30,152,69,192,230,56,241,89,
95,115,92,56,20,56,122,103,248,77,87,159,9,124,235,213,231,1,223,125,241,113,194,247,95,123,248,16,62,241,155,141,18,62,51,45,198,60,102,30,155,248,167,87,138,231,159,205,67,15,73,15,18,241,194,132,78,
84,184,158,152,208,137,10,247,19,67,39,38,116,162,194,253,196,224,137,193,19,131,39,6,79,84,184,159,24,60,49,120,98,240,196,224,137,193,19,131,39,38,116,99,36,238,39,6,79,12,158,152,224,141,124,98,240,
196,4,111,228,19,19,188,49,120,99,36,238,55,38,120,99,240,198,4,111,76,240,200,240,141,9,29,25,96,23,16,127,33,67,237,2,226,15,51,102,102,102,102,102,102,102,7,250,2,236,23,47,35,88,46,205,221,0,0,0,0,
73,69,78,68,174,66,96,130,0,0};

const char* Stamp::uhmbrellaBack_png = (const char*) resource_Stamp_uhmbrellaBack_png;
const int Stamp::uhmbrellaBack_pngSize = 9852;

// JUCER_RESOURCE: placeholderimage_png, 1201, "../../../../../Users/Samuel A. Maldonado/Downloads/placeholderimage.png"
static const unsigned char resource_Stamp_placeholderimage_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,225,0,0,0,225,8,3,0,0,0,9,109,34,72,0,0,0,60,80,76,84,69,227,227,227,158,158,158,
153,153,153,230,230,230,218,218,218,215,215,215,184,184,184,179,179,179,222,222,222,152,152,152,174,174,174,168,168,168,162,162,162,159,159,159,192,192,192,225,225,225,200,200,200,202,202,202,209,209,
209,194,194,194,36,222,24,220,0,0,4,48,73,68,65,84,120,156,237,157,219,178,162,48,16,69,33,141,128,220,193,255,255,215,1,140,150,71,185,116,52,218,116,102,175,151,153,51,85,135,98,205,134,92,58,1,162,
8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,2,145,244,25,124,149,81,175,79,227,68,250,52,190,4,17,37,151,226,108,98,19,164,225,24,222,144,86,198,196,35,225,25,94,195,187,218,5,104,248,24,94,120,
134,207,225,5,102,184,16,94,72,134,99,120,93,17,47,216,5,97,184,30,94,16,134,68,249,122,120,234,13,175,225,157,183,245,244,26,114,194,211,107,56,133,215,48,194,83,106,232,16,158,66,195,57,188,114,163,
217,212,109,56,133,151,197,174,122,90,12,199,241,216,201,61,60,53,134,99,120,253,91,225,169,48,252,40,188,227,27,206,225,153,207,244,142,107,232,35,188,3,27,126,122,231,29,222,176,245,20,222,113,13,79,
103,127,122,7,53,244,24,32,12,101,128,33,12,255,11,67,99,234,128,13,141,169,178,62,202,66,53,52,166,188,156,198,33,31,5,105,56,94,154,89,159,95,151,68,3,52,28,195,107,166,240,236,49,2,51,28,71,177,247,
240,44,33,25,62,133,103,9,197,112,33,60,75,16,134,203,225,89,212,27,174,135,103,209,109,184,25,158,69,175,225,110,120,22,165,134,83,120,3,111,151,147,70,67,19,23,29,35,60,139,54,67,115,102,135,103,81,
101,232,22,158,69,143,225,185,74,221,194,179,168,49,44,156,195,179,168,49,76,223,221,29,10,67,89,96,200,1,134,178,192,144,3,12,101,129,33,7,24,202,2,67,14,48,148,5,134,28,96,40,203,91,134,116,195,254,
24,152,33,81,210,55,89,81,20,89,211,39,179,100,80,134,68,67,90,223,54,105,142,127,214,233,160,104,149,123,223,144,168,171,94,158,86,171,250,112,12,105,120,241,155,173,202,50,20,195,148,177,18,167,216,
144,242,197,0,195,49,164,100,95,79,183,97,206,18,212,108,88,111,104,133,96,72,5,79,80,173,33,117,138,159,206,99,25,182,252,77,55,58,13,41,229,10,106,53,204,249,59,195,116,26,82,19,188,33,179,167,208,107,
232,178,125,81,165,33,93,130,55,228,246,246,199,48,28,39,228,121,158,36,121,123,43,178,48,12,43,61,134,211,131,148,69,61,21,31,76,92,23,211,54,123,214,125,232,32,40,107,72,121,83,63,62,106,104,76,213,
180,180,111,232,208,27,138,26,82,158,189,62,73,105,76,19,140,225,90,131,248,248,175,170,13,219,130,113,154,43,134,252,97,183,156,33,229,172,230,208,71,75,19,183,191,85,187,194,44,177,172,246,22,229,254,
175,222,169,68,222,156,200,44,177,172,26,102,251,191,122,39,19,49,228,246,216,107,134,236,9,254,120,27,94,4,12,137,81,199,221,52,140,146,99,79,158,104,96,63,112,191,58,123,226,223,136,165,68,132,252,81,
229,170,33,191,14,37,112,145,82,207,191,196,214,43,81,236,67,252,82,205,226,50,49,88,175,68,49,203,24,166,17,184,72,93,230,231,27,21,97,222,1,234,31,138,221,112,168,3,110,86,132,7,206,127,148,25,142,221,
206,108,87,245,57,75,135,111,239,229,248,4,135,174,108,123,101,134,209,99,72,244,20,78,45,233,222,10,233,158,98,245,43,169,63,184,212,114,119,87,185,203,173,99,153,242,71,74,79,56,53,52,123,134,148,109,
188,152,53,251,145,209,235,73,121,52,220,24,219,152,78,234,117,243,126,13,231,90,207,98,128,185,216,251,244,61,27,142,7,60,101,79,175,50,53,38,59,9,126,47,192,233,62,228,141,185,168,237,138,105,219,215,
149,184,232,90,209,239,33,184,45,57,48,111,38,162,40,25,186,166,105,186,33,17,255,222,3,111,180,117,51,60,57,28,248,113,243,165,40,46,181,206,179,244,201,190,133,203,184,84,100,212,245,49,46,123,12,36,
138,72,30,224,191,22,209,228,210,231,250,30,252,42,82,161,51,66,254,236,226,236,208,146,30,11,110,136,90,35,140,184,149,26,249,245,247,247,97,205,17,181,54,164,87,24,215,169,81,124,141,78,180,187,221,
190,208,4,221,31,123,11,164,165,200,178,166,87,218,173,26,139,84,137,197,47,27,53,22,153,50,167,127,168,95,254,16,135,169,37,10,213,95,129,162,230,213,209,196,151,67,76,242,60,65,81,87,254,221,19,85,118,
81,64,126,19,243,151,71,202,249,225,186,186,76,57,239,154,83,200,92,122,104,91,251,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,248,58,255,0,16,130,48,165,149,19,123,252,0,0,0,0,73,69,78,68,
174,66,96,130,0,0};

const char* Stamp::placeholderimage_png = (const char*) resource_Stamp_placeholderimage_png;
const int Stamp::placeholderimage_pngSize = 1201;


//[EndFile] You can add extra defines here...
//[/EndFile]

