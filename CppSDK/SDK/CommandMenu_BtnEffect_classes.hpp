#pragma once

 

// Package: CommandMenu_BtnEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenu_BtnEffect.CommandMenu_BtnEffect_C
// 0x0010 (0x0288 - 0x0278)
class UCommandMenu_BtnEffect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommandMenu_BtnEffect(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenu_BtnEffect_C">();
	}
	static class UCommandMenu_BtnEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenu_BtnEffect_C>();
	}
};
static_assert(alignof(UCommandMenu_BtnEffect_C) == 0x000008, "Wrong alignment on UCommandMenu_BtnEffect_C");
static_assert(sizeof(UCommandMenu_BtnEffect_C) == 0x000288, "Wrong size on UCommandMenu_BtnEffect_C");
static_assert(offsetof(UCommandMenu_BtnEffect_C, UberGraphFrame) == 0x000278, "Member 'UCommandMenu_BtnEffect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BtnEffect_C, CanvasPanel_0) == 0x000280, "Member 'UCommandMenu_BtnEffect_C::CanvasPanel_0' has a wrong offset!");

}

