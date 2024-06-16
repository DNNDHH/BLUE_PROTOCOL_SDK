#pragma once

 

// Package: ScriptFastForwardWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ScriptFastForwardWidget.ScriptFastForwardWidget_C
// 0x0030 (0x02A8 - 0x0278)
class UScriptFastForwardWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           ButtonGroup;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonImage;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ButtonText;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          FlagCache;                                         // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsFirst;                                          // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_792C[0x6];                                     // 0x029A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBScriptActor*                         ScriptActor;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ScriptFastForwardWidget(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetFastForwardStatus();
	void IsInfoEnable(bool* RetFlag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScriptFastForwardWidget_C">();
	}
	static class UScriptFastForwardWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScriptFastForwardWidget_C>();
	}
};
static_assert(alignof(UScriptFastForwardWidget_C) == 0x000008, "Wrong alignment on UScriptFastForwardWidget_C");
static_assert(sizeof(UScriptFastForwardWidget_C) == 0x0002A8, "Wrong size on UScriptFastForwardWidget_C");
static_assert(offsetof(UScriptFastForwardWidget_C, UberGraphFrame) == 0x000278, "Member 'UScriptFastForwardWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UScriptFastForwardWidget_C, ButtonGroup) == 0x000280, "Member 'UScriptFastForwardWidget_C::ButtonGroup' has a wrong offset!");
static_assert(offsetof(UScriptFastForwardWidget_C, ButtonImage) == 0x000288, "Member 'UScriptFastForwardWidget_C::ButtonImage' has a wrong offset!");
static_assert(offsetof(UScriptFastForwardWidget_C, ButtonText) == 0x000290, "Member 'UScriptFastForwardWidget_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UScriptFastForwardWidget_C, FlagCache) == 0x000298, "Member 'UScriptFastForwardWidget_C::FlagCache' has a wrong offset!");
static_assert(offsetof(UScriptFastForwardWidget_C, bIsFirst) == 0x000299, "Member 'UScriptFastForwardWidget_C::bIsFirst' has a wrong offset!");
static_assert(offsetof(UScriptFastForwardWidget_C, ScriptActor) == 0x0002A0, "Member 'UScriptFastForwardWidget_C::ScriptActor' has a wrong offset!");

}

