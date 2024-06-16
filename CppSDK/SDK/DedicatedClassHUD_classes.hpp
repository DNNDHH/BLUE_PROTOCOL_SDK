#pragma once

 

// Package: DedicatedClassHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DedicatedClassHUD.DedicatedClassHUD_C
// 0x0060 (0x02D8 - 0x0278)
class UDedicatedClassHUD_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Cvs;                                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class UUserWidget*>       UserWidgets;                                       // 0x0288(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_DedicatedClassHUD(int32 EntryPoint);
	void OnUpdateHudLayout();
	void RegistClassHud(class UUserWidget* Widget, const class FString& Param_Name);
	void Construct();
	void RegistWidget(class UUserWidget* Widget, const class FString& Param_Name);
	void LoadSavePosition(const class FString& Param_Name);
	bool UnregistClassHud(const class FString& Param_Name);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DedicatedClassHUD_C">();
	}
	static class UDedicatedClassHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDedicatedClassHUD_C>();
	}
};
static_assert(alignof(UDedicatedClassHUD_C) == 0x000008, "Wrong alignment on UDedicatedClassHUD_C");
static_assert(sizeof(UDedicatedClassHUD_C) == 0x0002D8, "Wrong size on UDedicatedClassHUD_C");
static_assert(offsetof(UDedicatedClassHUD_C, UberGraphFrame) == 0x000278, "Member 'UDedicatedClassHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDedicatedClassHUD_C, Cvs) == 0x000280, "Member 'UDedicatedClassHUD_C::Cvs' has a wrong offset!");
static_assert(offsetof(UDedicatedClassHUD_C, UserWidgets) == 0x000288, "Member 'UDedicatedClassHUD_C::UserWidgets' has a wrong offset!");

}

