// Jolt Physics Library (https://github.com/jrouwe/JoltPhysics)
// SPDX-FileCopyrightText: 2024 Jorrit Rouwe
// SPDX-License-Identifier: MIT

#pragma once

#include <Tests/Test.h>
#include <Jolt/Physics/SoftBody/SoftBodySharedSettings.h>

class SoftBodyVertexRadiusTest : public Test
{
public:
	JPH_DECLARE_RTTI_VIRTUAL(JPH_NO_EXPORT, SoftBodyVertexRadiusTest)

	// Description of the test
	virtual const char *	GetDescription() const override
	{
		return "Shows how you can use the vertex radius of a soft body to prevent z-fighting while rendering it.";
	}

	// See: Test
	virtual void			Initialize() override;

	// Optional settings menu
	virtual bool			HasSettingsMenu() const override							{ return true; }
	virtual void			CreateSettingsMenu(DebugUI *inUI, UIElement *inSubMenu) override;

private:
	Ref<SoftBodySharedSettings>	mSharedSettings;

	static inline float		sVertexRadius = 0.01f;
};
