#pragma once

#include "GuiComponent.h"
#include "components/MenuComponent.h"
#include <functional>
#include "GamelistDB.h"

class GuiMenu : public GuiComponent
{
public:
	GuiMenu(Window* window, SystemData* system);

	bool input(InputConfig* config, Input input) override;
	void onSizeChanged() override;
	std::vector<HelpPrompt> getHelpPrompts() override;

private:
	void addEntry(const char* name, unsigned int color, bool add_arrow, const std::function<void()>& func);

	MenuComponent mMenu;
	TextComponent mVersion;
	SystemData*   mSystem;
};
