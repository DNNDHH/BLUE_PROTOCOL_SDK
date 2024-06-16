#pragma once

 

// Package: CommandMenu_BgAnim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenu_BgAnim.CommandMenu_BgAnim_C
// 0x0040 (0x02B8 - 0x0278)
class UCommandMenu_BgAnim_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimBgColor;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgForAnim;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas1;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         HueShiftPerFrom;                                   // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HueShiftPerTo;                                     // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFirstTime;                                        // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E71[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DesaturationFracFrom;                              // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DesaturationFracTo;                                // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommandMenu_BgAnim(int32 EntryPoint);
	void Construct();
	void Set_Bg_Color(ESBCommandMenuType MenuType, bool bAnim);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenu_BgAnim_C">();
	}
	static class UCommandMenu_BgAnim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenu_BgAnim_C>();
	}
};
static_assert(alignof(UCommandMenu_BgAnim_C) == 0x000008, "Wrong alignment on UCommandMenu_BgAnim_C");
static_assert(sizeof(UCommandMenu_BgAnim_C) == 0x0002B8, "Wrong size on UCommandMenu_BgAnim_C");
static_assert(offsetof(UCommandMenu_BgAnim_C, UberGraphFrame) == 0x000278, "Member 'UCommandMenu_BgAnim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnim_C, AnimBgColor) == 0x000280, "Member 'UCommandMenu_BgAnim_C::AnimBgColor' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnim_C, BG) == 0x000288, "Member 'UCommandMenu_BgAnim_C::BG' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnim_C, BgForAnim) == 0x000290, "Member 'UCommandMenu_BgAnim_C::BgForAnim' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnim_C, Canvas1) == 0x000298, "Member 'UCommandMenu_BgAnim_C::Canvas1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnim_C, HueShiftPerFrom) == 0x0002A0, "Member 'UCommandMenu_BgAnim_C::HueShiftPerFrom' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnim_C, HueShiftPerTo) == 0x0002A4, "Member 'UCommandMenu_BgAnim_C::HueShiftPerTo' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnim_C, bFirstTime) == 0x0002A8, "Member 'UCommandMenu_BgAnim_C::bFirstTime' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnim_C, DesaturationFracFrom) == 0x0002AC, "Member 'UCommandMenu_BgAnim_C::DesaturationFracFrom' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnim_C, DesaturationFracTo) == 0x0002B0, "Member 'UCommandMenu_BgAnim_C::DesaturationFracTo' has a wrong offset!");

}

