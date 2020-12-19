/*
 * Copyright (C) 2019 Damir Porobic <damir.porobic@gmx.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include "AbstractSettingsProvider.h"

namespace kImageAnnotator {

AbstractSettingsProvider::AbstractSettingsProvider() :
	mSettingsListener(nullptr)
{

}

void AbstractSettingsProvider::toolChanged(Tools tool)
{
	if(mSettingsListener) {
		mSettingsListener->toolChanged(tool);
	}
}

void AbstractSettingsProvider::firstBadgeNumberChanged(int number)
{
	if(mSettingsListener) {
		mSettingsListener->firstBadgeNumberChanged(number);
	}
}

void AbstractSettingsProvider::itemSettingChanged()
{
	if(mSettingsListener) {
		mSettingsListener->itemSettingsChanged();
	}
}

void AbstractSettingsProvider::setActiveListener(ISettingsListener *settingsListener)
{
	mSettingsListener = settingsListener;
	if(mSettingsListener) {
		updateFirstBadgeNumber(mSettingsListener->firstBadgeNumber());
	}
}

void AbstractSettingsProvider::effectChanged(ImageEffects effect)
{
	if(mSettingsListener) {
		mSettingsListener->imageEffectChanged(effect);
	}
}

} // namespace kImageAnnotator
