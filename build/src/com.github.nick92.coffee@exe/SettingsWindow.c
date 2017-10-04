/* SettingsWindow.c generated by valac 0.30.1, the Vala compiler
 * generated from SettingsWindow.vala, do not modify */

/*
* Copyright (C) 2017 - Nick Wilkins
*
* Coffee is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* Coffee is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with Coffee. If not, see <http://www.gnu.org/licenses/>.
*/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define SETTINGS_TYPE_SETTINGS_WINDOW (settings_settings_window_get_type ())
#define SETTINGS_SETTINGS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SETTINGS_TYPE_SETTINGS_WINDOW, SettingsSettingsWindow))
#define SETTINGS_SETTINGS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SETTINGS_TYPE_SETTINGS_WINDOW, SettingsSettingsWindowClass))
#define SETTINGS_IS_SETTINGS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SETTINGS_TYPE_SETTINGS_WINDOW))
#define SETTINGS_IS_SETTINGS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SETTINGS_TYPE_SETTINGS_WINDOW))
#define SETTINGS_SETTINGS_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SETTINGS_TYPE_SETTINGS_WINDOW, SettingsSettingsWindowClass))

typedef struct _SettingsSettingsWindow SettingsSettingsWindow;
typedef struct _SettingsSettingsWindowClass SettingsSettingsWindowClass;
typedef struct _SettingsSettingsWindowPrivate SettingsSettingsWindowPrivate;

#define SETTINGS_TYPE_SETTINGS (settings_settings_get_type ())
#define SETTINGS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SETTINGS_TYPE_SETTINGS, SettingsSettings))
#define SETTINGS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SETTINGS_TYPE_SETTINGS, SettingsSettingsClass))
#define SETTINGS_IS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SETTINGS_TYPE_SETTINGS))
#define SETTINGS_IS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SETTINGS_TYPE_SETTINGS))
#define SETTINGS_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SETTINGS_TYPE_SETTINGS, SettingsSettingsClass))

typedef struct _SettingsSettings SettingsSettings;
typedef struct _SettingsSettingsClass SettingsSettingsClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define SETTINGS_TYPE_NEWS_GRID (settings_news_grid_get_type ())
#define SETTINGS_NEWS_GRID(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SETTINGS_TYPE_NEWS_GRID, SettingsNewsGrid))
#define SETTINGS_NEWS_GRID_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SETTINGS_TYPE_NEWS_GRID, SettingsNewsGridClass))
#define SETTINGS_IS_NEWS_GRID(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SETTINGS_TYPE_NEWS_GRID))
#define SETTINGS_IS_NEWS_GRID_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SETTINGS_TYPE_NEWS_GRID))
#define SETTINGS_NEWS_GRID_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SETTINGS_TYPE_NEWS_GRID, SettingsNewsGridClass))

typedef struct _SettingsNewsGrid SettingsNewsGrid;
typedef struct _SettingsNewsGridClass SettingsNewsGridClass;

#define SETTINGS_TYPE_LOCATION_GRID (settings_location_grid_get_type ())
#define SETTINGS_LOCATION_GRID(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SETTINGS_TYPE_LOCATION_GRID, SettingsLocationGrid))
#define SETTINGS_LOCATION_GRID_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SETTINGS_TYPE_LOCATION_GRID, SettingsLocationGridClass))
#define SETTINGS_IS_LOCATION_GRID(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SETTINGS_TYPE_LOCATION_GRID))
#define SETTINGS_IS_LOCATION_GRID_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SETTINGS_TYPE_LOCATION_GRID))
#define SETTINGS_LOCATION_GRID_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SETTINGS_TYPE_LOCATION_GRID, SettingsLocationGridClass))

typedef struct _SettingsLocationGrid SettingsLocationGrid;
typedef struct _SettingsLocationGridClass SettingsLocationGridClass;

struct _SettingsSettingsWindow {
	GtkWindow parent_instance;
	SettingsSettingsWindowPrivate * priv;
};

struct _SettingsSettingsWindowClass {
	GtkWindowClass parent_class;
};

struct _SettingsSettingsWindowPrivate {
	SettingsSettings* settings;
	GtkGrid* grid;
	GtkStack* stack;
};


static gpointer settings_settings_window_parent_class = NULL;

GType settings_settings_window_get_type (void) G_GNUC_CONST;
GType settings_settings_get_type (void) G_GNUC_CONST;
#define SETTINGS_SETTINGS_WINDOW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SETTINGS_TYPE_SETTINGS_WINDOW, SettingsSettingsWindowPrivate))
enum  {
	SETTINGS_SETTINGS_WINDOW_DUMMY_PROPERTY
};
SettingsSettingsWindow* settings_settings_window_new (void);
SettingsSettingsWindow* settings_settings_window_construct (GType object_type);
SettingsSettings* settings_settings_new (void);
SettingsSettings* settings_settings_construct (GType object_type);
void settings_settings_window_setup_ui (SettingsSettingsWindow* self);
SettingsNewsGrid* settings_news_grid_new (void);
SettingsNewsGrid* settings_news_grid_construct (GType object_type);
GType settings_news_grid_get_type (void) G_GNUC_CONST;
SettingsLocationGrid* settings_location_grid_new (void);
SettingsLocationGrid* settings_location_grid_construct (GType object_type);
GType settings_location_grid_get_type (void) G_GNUC_CONST;
static void settings_settings_window_finalize (GObject* obj);


SettingsSettingsWindow* settings_settings_window_construct (GType object_type) {
	SettingsSettingsWindow * self = NULL;
	SettingsSettings* _tmp0_ = NULL;
#line 28 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	self = (SettingsSettingsWindow*) g_object_new (object_type, NULL);
#line 29 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	_tmp0_ = settings_settings_new ();
#line 29 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	_g_object_unref0 (self->priv->settings);
#line 29 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	self->priv->settings = _tmp0_;
#line 30 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	settings_settings_window_setup_ui (self);
#line 28 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	return self;
#line 122 "SettingsWindow.c"
}


SettingsSettingsWindow* settings_settings_window_new (void) {
#line 28 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	return settings_settings_window_construct (SETTINGS_TYPE_SETTINGS_WINDOW);
#line 129 "SettingsWindow.c"
}


void settings_settings_window_setup_ui (SettingsSettingsWindow* self) {
	GtkGrid* _tmp0_ = NULL;
	GtkGrid* _tmp19_ = NULL;
	GtkGrid* _tmp20_ = NULL;
#line 33 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	g_return_if_fail (self != NULL);
#line 34 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	gtk_window_set_title ((GtkWindow*) self, "Coffee Settings");
#line 37 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	gtk_window_set_default_size ((GtkWindow*) self, 800, 600);
#line 38 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	gtk_window_set_hide_titlebar_when_maximized ((GtkWindow*) self, FALSE);
#line 40 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	_tmp0_ = self->priv->grid;
#line 40 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	if (_tmp0_ == NULL) {
#line 149 "SettingsWindow.c"
		GtkGrid* _tmp1_ = NULL;
		GtkGrid* _tmp2_ = NULL;
		GtkStack* _tmp3_ = NULL;
		GtkStack* _tmp4_ = NULL;
		SettingsNewsGrid* _tmp5_ = NULL;
		SettingsNewsGrid* _tmp6_ = NULL;
		GtkStack* _tmp7_ = NULL;
		SettingsLocationGrid* _tmp8_ = NULL;
		SettingsLocationGrid* _tmp9_ = NULL;
		GtkStackSwitcher* stack_switcher = NULL;
		GtkStackSwitcher* _tmp10_ = NULL;
		GtkStackSwitcher* _tmp11_ = NULL;
		GtkStack* _tmp12_ = NULL;
		GtkStackSwitcher* _tmp13_ = NULL;
		GtkStackSwitcher* _tmp14_ = NULL;
		GtkGrid* _tmp15_ = NULL;
		GtkStackSwitcher* _tmp16_ = NULL;
		GtkGrid* _tmp17_ = NULL;
		GtkStack* _tmp18_ = NULL;
#line 41 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp1_ = (GtkGrid*) gtk_grid_new ();
#line 41 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		g_object_ref_sink (_tmp1_);
#line 41 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_g_object_unref0 (self->priv->grid);
#line 41 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		self->priv->grid = _tmp1_;
#line 42 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp2_ = self->priv->grid;
#line 42 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		g_object_set ((GtkWidget*) _tmp2_, "margin", 12, NULL);
#line 44 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp3_ = (GtkStack*) gtk_stack_new ();
#line 44 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		g_object_ref_sink (_tmp3_);
#line 44 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_g_object_unref0 (self->priv->stack);
#line 44 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		self->priv->stack = _tmp3_;
#line 46 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp4_ = self->priv->stack;
#line 46 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp5_ = settings_news_grid_new ();
#line 46 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		g_object_ref_sink (_tmp5_);
#line 46 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp6_ = _tmp5_;
#line 46 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		gtk_stack_add_titled (_tmp4_, (GtkWidget*) _tmp6_, "news", "News");
#line 46 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_g_object_unref0 (_tmp6_);
#line 47 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp7_ = self->priv->stack;
#line 47 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp8_ = settings_location_grid_new ();
#line 47 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		g_object_ref_sink (_tmp8_);
#line 47 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp9_ = _tmp8_;
#line 47 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		gtk_stack_add_titled (_tmp7_, (GtkWidget*) _tmp9_, "location", "Location");
#line 47 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_g_object_unref0 (_tmp9_);
#line 49 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp10_ = (GtkStackSwitcher*) gtk_stack_switcher_new ();
#line 49 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		g_object_ref_sink (_tmp10_);
#line 49 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		stack_switcher = _tmp10_;
#line 50 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp11_ = stack_switcher;
#line 50 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp12_ = self->priv->stack;
#line 50 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		gtk_stack_switcher_set_stack (_tmp11_, _tmp12_);
#line 51 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp13_ = stack_switcher;
#line 51 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		gtk_widget_set_halign ((GtkWidget*) _tmp13_, GTK_ALIGN_CENTER);
#line 52 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp14_ = stack_switcher;
#line 52 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		g_object_set ((GtkWidget*) _tmp14_, "margin", 24, NULL);
#line 54 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp15_ = self->priv->grid;
#line 54 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp16_ = stack_switcher;
#line 54 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		gtk_grid_attach (_tmp15_, (GtkWidget*) _tmp16_, 0, 0, 1, 1);
#line 55 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp17_ = self->priv->grid;
#line 55 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_tmp18_ = self->priv->stack;
#line 55 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		gtk_grid_attach (_tmp17_, (GtkWidget*) _tmp18_, 0, 1, 1, 1);
#line 40 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
		_g_object_unref0 (stack_switcher);
#line 247 "SettingsWindow.c"
	}
#line 57 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	_tmp19_ = self->priv->grid;
#line 57 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	gtk_widget_show ((GtkWidget*) _tmp19_);
#line 59 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	_tmp20_ = self->priv->grid;
#line 59 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp20_);
#line 257 "SettingsWindow.c"
}


static void settings_settings_window_class_init (SettingsSettingsWindowClass * klass) {
#line 21 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	settings_settings_window_parent_class = g_type_class_peek_parent (klass);
#line 21 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	g_type_class_add_private (klass, sizeof (SettingsSettingsWindowPrivate));
#line 21 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	G_OBJECT_CLASS (klass)->finalize = settings_settings_window_finalize;
#line 268 "SettingsWindow.c"
}


static void settings_settings_window_instance_init (SettingsSettingsWindow * self) {
#line 21 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	self->priv = SETTINGS_SETTINGS_WINDOW_GET_PRIVATE (self);
#line 275 "SettingsWindow.c"
}


static void settings_settings_window_finalize (GObject* obj) {
	SettingsSettingsWindow * self;
#line 21 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SETTINGS_TYPE_SETTINGS_WINDOW, SettingsSettingsWindow);
#line 23 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	_g_object_unref0 (self->priv->settings);
#line 24 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	_g_object_unref0 (self->priv->grid);
#line 25 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	_g_object_unref0 (self->priv->stack);
#line 21 "/home/nick/work/Coffee/sample/git/src/Settings/SettingsWindow.vala"
	G_OBJECT_CLASS (settings_settings_window_parent_class)->finalize (obj);
#line 291 "SettingsWindow.c"
}


GType settings_settings_window_get_type (void) {
	static volatile gsize settings_settings_window_type_id__volatile = 0;
	if (g_once_init_enter (&settings_settings_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SettingsSettingsWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) settings_settings_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SettingsSettingsWindow), 0, (GInstanceInitFunc) settings_settings_window_instance_init, NULL };
		GType settings_settings_window_type_id;
		settings_settings_window_type_id = g_type_register_static (gtk_window_get_type (), "SettingsSettingsWindow", &g_define_type_info, 0);
		g_once_init_leave (&settings_settings_window_type_id__volatile, settings_settings_window_type_id);
	}
	return settings_settings_window_type_id__volatile;
}


