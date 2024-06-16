#pragma once

 

// Package: WPB_BuffIcon

#include "Basic.hpp"

#include "BuffIconAssetData_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WPB_BuffIcon.WPB_BuffIcon_C
// 0x0048 (0x02C0 - 0x0278)
class UWPB_BuffIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BuffIcon_1;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Variable_C*    ToolTip;                                           // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBuffIconAssetData                     Data;                                              // 0x0290(0x0028)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BuffName;                                          // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WPB_BuffIcon(int32 EntryPoint);
	void SetBuffIcon(class FName Param_BuffName);
	class UWidget* Get_BuffIcon_1_ToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WPB_BuffIcon_C">();
	}
	static class UWPB_BuffIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWPB_BuffIcon_C>();
	}
};
static_assert(alignof(UWPB_BuffIcon_C) == 0x000008, "Wrong alignment on UWPB_BuffIcon_C");
static_assert(sizeof(UWPB_BuffIcon_C) == 0x0002C0, "Wrong size on UWPB_BuffIcon_C");
static_assert(offsetof(UWPB_BuffIcon_C, UberGraphFrame) == 0x000278, "Member 'UWPB_BuffIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWPB_BuffIcon_C, BuffIcon_1) == 0x000280, "Member 'UWPB_BuffIcon_C::BuffIcon_1' has a wrong offset!");
static_assert(offsetof(UWPB_BuffIcon_C, ToolTip) == 0x000288, "Member 'UWPB_BuffIcon_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UWPB_BuffIcon_C, Data) == 0x000290, "Member 'UWPB_BuffIcon_C::Data' has a wrong offset!");
static_assert(offsetof(UWPB_BuffIcon_C, BuffName) == 0x0002B8, "Member 'UWPB_BuffIcon_C::BuffName' has a wrong offset!");

}

