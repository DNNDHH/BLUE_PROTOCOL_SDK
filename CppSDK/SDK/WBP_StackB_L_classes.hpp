#pragma once

 

// Package: WBP_StackB_L

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StackB_L.WBP_StackB_L_C
// 0x0050 (0x02C8 - 0x0278)
class UWBP_StackB_L_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HB_MaxLimit_StackB;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Basic;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_MaxStackB;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_NoStackb;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTag;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_StackBNum;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_BG;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         StackBNum;                                         // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VisibleStackBMax;                                  // 0x02BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6DD5[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StackBMax;                                         // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_StackB_L(int32 EntryPoint);
	void Construct();
	void SetStackBNumByItemInfo(const struct FOwnItemInfo& ItemInfo);
	void SetStackBNum(int32 Param_StackBNum);
	void UpdateStackBMax();
	void SetStackBMax(int32 Param_StackBMax);
	void SetVisibleStackBMax(bool Param_VisibleStackBMax);
	void UpdateStackBView();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StackB_L_C">();
	}
	static class UWBP_StackB_L_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StackB_L_C>();
	}
};
static_assert(alignof(UWBP_StackB_L_C) == 0x000008, "Wrong alignment on UWBP_StackB_L_C");
static_assert(sizeof(UWBP_StackB_L_C) == 0x0002C8, "Wrong size on UWBP_StackB_L_C");
static_assert(offsetof(UWBP_StackB_L_C, UberGraphFrame) == 0x000278, "Member 'UWBP_StackB_L_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_L_C, HB_MaxLimit_StackB) == 0x000280, "Member 'UWBP_StackB_L_C::HB_MaxLimit_StackB' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_L_C, Img_Basic) == 0x000288, "Member 'UWBP_StackB_L_C::Img_Basic' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_L_C, Img_MaxStackB) == 0x000290, "Member 'UWBP_StackB_L_C::Img_MaxStackB' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_L_C, Img_NoStackb) == 0x000298, "Member 'UWBP_StackB_L_C::Img_NoStackb' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_L_C, InventoryTag) == 0x0002A0, "Member 'UWBP_StackB_L_C::InventoryTag' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_L_C, Txt_StackBNum) == 0x0002A8, "Member 'UWBP_StackB_L_C::Txt_StackBNum' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_L_C, WS_BG) == 0x0002B0, "Member 'UWBP_StackB_L_C::WS_BG' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_L_C, StackBNum) == 0x0002B8, "Member 'UWBP_StackB_L_C::StackBNum' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_L_C, VisibleStackBMax) == 0x0002BC, "Member 'UWBP_StackB_L_C::VisibleStackBMax' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_L_C, StackBMax) == 0x0002C0, "Member 'UWBP_StackB_L_C::StackBMax' has a wrong offset!");

}

