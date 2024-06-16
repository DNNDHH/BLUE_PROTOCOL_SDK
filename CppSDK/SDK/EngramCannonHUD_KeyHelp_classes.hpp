#pragma once

 

// Package: EngramCannonHUD_KeyHelp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C
// 0x0020 (0x0298 - 0x0278)
class UEngramCannonHUD_KeyHelp_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_Key;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Esc_text;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Shot_text;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EngramCannonHUD_KeyHelp(int32 EntryPoint);
	void OnShot_Event();
	void Destruct();
	void Construct();
	void UpdateKeyText();
	void SetEnableKeyHelp(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EngramCannonHUD_KeyHelp_C">();
	}
	static class UEngramCannonHUD_KeyHelp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEngramCannonHUD_KeyHelp_C>();
	}
};
static_assert(alignof(UEngramCannonHUD_KeyHelp_C) == 0x000008, "Wrong alignment on UEngramCannonHUD_KeyHelp_C");
static_assert(sizeof(UEngramCannonHUD_KeyHelp_C) == 0x000298, "Wrong size on UEngramCannonHUD_KeyHelp_C");
static_assert(offsetof(UEngramCannonHUD_KeyHelp_C, UberGraphFrame) == 0x000278, "Member 'UEngramCannonHUD_KeyHelp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_KeyHelp_C, CanvasPanel_Key) == 0x000280, "Member 'UEngramCannonHUD_KeyHelp_C::CanvasPanel_Key' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_KeyHelp_C, Esc_text) == 0x000288, "Member 'UEngramCannonHUD_KeyHelp_C::Esc_text' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_KeyHelp_C, Shot_text) == 0x000290, "Member 'UEngramCannonHUD_KeyHelp_C::Shot_text' has a wrong offset!");

}

