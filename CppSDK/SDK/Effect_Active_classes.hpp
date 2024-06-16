#pragma once

 

// Package: Effect_Active

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Effect_Active.Effect_Active_C
// 0x0038 (0x02B0 - 0x0278)
class UEffect_Active_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Value;                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Name;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsShowTooltip;                                     // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A80[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AttribText;                                        // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Effect_Active(int32 EntryPoint);
	void SetValueVisible(bool bVisible);
	void SetDataByDateTIme(const class FString& Param_Name, const struct FDateTime& Time, bool bHideYear);
	void SetDataByFloatValue(const class FString& Param_Name, float Value);
	void Set_Data(bool Param_IsShowTooltip, const class FString& Param_Name, int32 Value, const class FString& Param_ToolTipText);
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Effect_Active_C">();
	}
	static class UEffect_Active_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEffect_Active_C>();
	}
};
static_assert(alignof(UEffect_Active_C) == 0x000008, "Wrong alignment on UEffect_Active_C");
static_assert(sizeof(UEffect_Active_C) == 0x0002B0, "Wrong size on UEffect_Active_C");
static_assert(offsetof(UEffect_Active_C, UberGraphFrame) == 0x000278, "Member 'UEffect_Active_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEffect_Active_C, CanvasPanel_0) == 0x000280, "Member 'UEffect_Active_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UEffect_Active_C, SBDateTimeTextBlock_Value) == 0x000288, "Member 'UEffect_Active_C::SBDateTimeTextBlock_Value' has a wrong offset!");
static_assert(offsetof(UEffect_Active_C, Txt_Name) == 0x000290, "Member 'UEffect_Active_C::Txt_Name' has a wrong offset!");
static_assert(offsetof(UEffect_Active_C, IsShowTooltip) == 0x000298, "Member 'UEffect_Active_C::IsShowTooltip' has a wrong offset!");
static_assert(offsetof(UEffect_Active_C, AttribText) == 0x0002A0, "Member 'UEffect_Active_C::AttribText' has a wrong offset!");

}

