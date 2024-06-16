#pragma once

 

// Package: ShortcutRing_KeyGuidePlate

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShortcutRing_KeyGuidePlate.ShortcutRing_KeyGuidePlate_C
// 0x0070 (0x02F8 - 0x0288)
class UShortcutRing_KeyGuidePlate_C final : public USBShortcutRingKeyGuidePlate
{
public:
	class USBTextKeyIcon_C*                       TextEdit;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextKeyIcon_C*                       TextSelect;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FKey                                   KeySelectKeyboard;                                 // 0x0298(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                   KeySelectGamepad;                                  // 0x02B0(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                   KeyEditKeyboard;                                   // 0x02C8(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                   KeyEditGamepad;                                    // 0x02E0(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)

public:
	void OnSetup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortcutRing_KeyGuidePlate_C">();
	}
	static class UShortcutRing_KeyGuidePlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShortcutRing_KeyGuidePlate_C>();
	}
};
static_assert(alignof(UShortcutRing_KeyGuidePlate_C) == 0x000008, "Wrong alignment on UShortcutRing_KeyGuidePlate_C");
static_assert(sizeof(UShortcutRing_KeyGuidePlate_C) == 0x0002F8, "Wrong size on UShortcutRing_KeyGuidePlate_C");
static_assert(offsetof(UShortcutRing_KeyGuidePlate_C, TextEdit) == 0x000288, "Member 'UShortcutRing_KeyGuidePlate_C::TextEdit' has a wrong offset!");
static_assert(offsetof(UShortcutRing_KeyGuidePlate_C, TextSelect) == 0x000290, "Member 'UShortcutRing_KeyGuidePlate_C::TextSelect' has a wrong offset!");
static_assert(offsetof(UShortcutRing_KeyGuidePlate_C, KeySelectKeyboard) == 0x000298, "Member 'UShortcutRing_KeyGuidePlate_C::KeySelectKeyboard' has a wrong offset!");
static_assert(offsetof(UShortcutRing_KeyGuidePlate_C, KeySelectGamepad) == 0x0002B0, "Member 'UShortcutRing_KeyGuidePlate_C::KeySelectGamepad' has a wrong offset!");
static_assert(offsetof(UShortcutRing_KeyGuidePlate_C, KeyEditKeyboard) == 0x0002C8, "Member 'UShortcutRing_KeyGuidePlate_C::KeyEditKeyboard' has a wrong offset!");
static_assert(offsetof(UShortcutRing_KeyGuidePlate_C, KeyEditGamepad) == 0x0002E0, "Member 'UShortcutRing_KeyGuidePlate_C::KeyEditGamepad' has a wrong offset!");

}

