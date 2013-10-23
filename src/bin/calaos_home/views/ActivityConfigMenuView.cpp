/******************************************************************************
**  Copyright (c) 2006-2013, Calaos. All Rights Reserved.
**
**  This file is part of Calaos Home.
**
**  Calaos Home is free software; you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation; either version 3 of the License, or
**  (at your option) any later version.
**
**  Calaos Home is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with Calaos; if not, write to the Free Software
**  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
**
******************************************************************************/
#include "ActivityConfigMenuView.h"

ActivityConfigMenuView::ActivityConfigMenuView(Evas *_e, Evas_Object *_parent):
        ActivityView(_e, _parent, "calaos/config/menu")
{
/*
        int pos = 1;

        if (Utils::get_config_option("enable_media_music") != "false")
                addIcon(pos++, "music");

        if (Utils::get_config_option("enable_media_camera") != "false")
                addIcon(pos++, "camera");

        if (Utils::get_config_option("enable_media_photos") != "false")
                addIcon(pos++, "photos");

#ifdef HAVE_EWEBKIT
        if (Utils::get_config_option("enable_media_web") != "false")
                addIcon(pos++, "web");
#endif

        if (Utils::get_config_option("enable_media_eskiss") != "false")
                addIcon(pos++, "eskiss");
*/
}

ActivityConfigMenuView::~ActivityConfigMenuView()
{
        for_each(items.begin(), items.end(), Delete());
        items.clear();
}

void ActivityConfigMenuView::addIcon(int position, string type)
{
/*
        if (Utils::get_config_option("enable_media_" + type) != "false")
        {
                EdjeObject *obj = new EdjeObject(theme, evas);
                obj->LoadEdje("calaos/icons/menu/media/" + type);
                obj->addCallback("menu", "click," + type, sigc::mem_fun(*this, &ActivityConfigMenuView::ItemCallback));
                Swallow(obj, string("icon.") + to_string(position));
                obj->EmitSignal("show", "calaos");
                obj->Show();
                items.push_back(obj);
                position++;
        }
*/
}

void ActivityConfigMenuView::ItemCallback(void *data, Evas_Object *_edje, string emission, string source)
{
        if (source != "menu") return;
/*
        if (emission == "click,music")
        {
                menu_item_clicked.emit("music");
        }
        else if (emission == "click,camera")
        {
                menu_item_clicked.emit("camera");
        }
        else if (emission == "click,photos")
        {
                menu_item_clicked.emit("photos");
        }
        else if (emission == "click,web")
        {
                menu_item_clicked.emit("web");
        }
        else if (emission == "click,eskiss")
        {
                menu_item_clicked.emit("eskiss");
        }
*/
}

void ActivityConfigMenuView::resetView()
{
}
