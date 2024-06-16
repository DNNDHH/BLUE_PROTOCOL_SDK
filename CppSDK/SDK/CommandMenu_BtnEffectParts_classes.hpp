#pragma once

 

// Package: CommandMenu_BtnEffectParts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenu_BtnEffectParts.CommandMenu_BtnEffectParts_C
// 0x0030 (0x02A8 - 0x0278)
class UCommandMenu_BtnEffectParts_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       MoveXAnimation;                                    // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MoveX;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ScaleXY;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommandMenu_BtnEffectParts(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenu_BtnEffectParts_C">();
	}
	static class UCommandMenu_BtnEffectParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenu_BtnEffectParts_C>();
	}
};
static_assert(alignof(UCommandMenu_BtnEffectParts_C) == 0x000008, "Wrong alignment on UCommandMenu_BtnEffectParts_C");
static_assert(sizeof(UCommandMenu_BtnEffectParts_C) == 0x0002A8, "Wrong size on UCommandMenu_BtnEffectParts_C");
static_assert(offsetof(UCommandMenu_BtnEffectParts_C, UberGraphFrame) == 0x000278, "Member 'UCommandMenu_BtnEffectParts_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BtnEffectParts_C, MoveXAnimation) == 0x000280, "Member 'UCommandMenu_BtnEffectParts_C::MoveXAnimation' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BtnEffectParts_C, CanvasPanel_0) == 0x000288, "Member 'UCommandMenu_BtnEffectParts_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BtnEffectParts_C, Image_1) == 0x000290, "Member 'UCommandMenu_BtnEffectParts_C::Image_1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BtnEffectParts_C, MoveX) == 0x000298, "Member 'UCommandMenu_BtnEffectParts_C::MoveX' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BtnEffectParts_C, ScaleXY) == 0x0002A0, "Member 'UCommandMenu_BtnEffectParts_C::ScaleXY' has a wrong offset!");

}

