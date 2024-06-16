#pragma once

 

// Package: WBP_StackB_M

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StackB_M.WBP_StackB_M_C
// 0x0058 (0x02D0 - 0x0278)
class UWBP_StackB_M_C final : public UUserWidget
{
public:
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_M1;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_M2;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_M3;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_N1;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_N2;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_N3;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_M;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_N;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Status;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         StackNum;                                          // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stack_BMax;                                        // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Set_Stack_BIcon_MBase(int32 Param_StackNum, bool IsEffectiveDisplay);
	void SetStackBIconEffect(int32 Param_Index);
	void Set_Stack_BIcon_One_Item(const struct FOwnItemInfo& Info, bool IsEffectiveDisplay, bool* Visible);
	void Set_Stack_BIcon_One_ItembyWeaponData(const struct FSBWeaponItemData& Info, bool IsEffectiveDisplay, bool* Visible);
	void SetStackBIconOneItemBase(int32 InStackBNum, int32 InStackBMax, bool InIsEffectiveDisplay, bool* Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StackB_M_C">();
	}
	static class UWBP_StackB_M_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StackB_M_C>();
	}
};
static_assert(alignof(UWBP_StackB_M_C) == 0x000008, "Wrong alignment on UWBP_StackB_M_C");
static_assert(sizeof(UWBP_StackB_M_C) == 0x0002D0, "Wrong size on UWBP_StackB_M_C");
static_assert(offsetof(UWBP_StackB_M_C, CanvasPanel_0) == 0x000278, "Member 'UWBP_StackB_M_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_M_C, SBRuntimeTextBlock_M1) == 0x000280, "Member 'UWBP_StackB_M_C::SBRuntimeTextBlock_M1' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_M_C, SBRuntimeTextBlock_M2) == 0x000288, "Member 'UWBP_StackB_M_C::SBRuntimeTextBlock_M2' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_M_C, SBRuntimeTextBlock_M3) == 0x000290, "Member 'UWBP_StackB_M_C::SBRuntimeTextBlock_M3' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_M_C, SBRuntimeTextBlock_N1) == 0x000298, "Member 'UWBP_StackB_M_C::SBRuntimeTextBlock_N1' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_M_C, SBRuntimeTextBlock_N2) == 0x0002A0, "Member 'UWBP_StackB_M_C::SBRuntimeTextBlock_N2' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_M_C, SBRuntimeTextBlock_N3) == 0x0002A8, "Member 'UWBP_StackB_M_C::SBRuntimeTextBlock_N3' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_M_C, WidgetSwitcher_M) == 0x0002B0, "Member 'UWBP_StackB_M_C::WidgetSwitcher_M' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_M_C, WidgetSwitcher_N) == 0x0002B8, "Member 'UWBP_StackB_M_C::WidgetSwitcher_N' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_M_C, WidgetSwitcher_Status) == 0x0002C0, "Member 'UWBP_StackB_M_C::WidgetSwitcher_Status' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_M_C, StackNum) == 0x0002C8, "Member 'UWBP_StackB_M_C::StackNum' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_M_C, Stack_BMax) == 0x0002CC, "Member 'UWBP_StackB_M_C::Stack_BMax' has a wrong offset!");

}

