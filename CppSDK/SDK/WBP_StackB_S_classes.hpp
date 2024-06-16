#pragma once

 

// Package: WBP_StackB_S

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StackB_S.WBP_StackB_S_C
// 0x0090 (0x0308 - 0x0278)
class UWBP_StackB_S_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_None;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG_1;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG_2;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_M1;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_M2;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_M3;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_N1;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_N2;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_N3;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_M;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_N;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Status;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonToolTipText_Variable_C*      ToolTip;                                           // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stack_BMax;                                        // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StackNum;                                          // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoneVisible;                                       // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_StackB_S(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Set_Stack_BIcon_Base(int32 Param_StackNum, bool IsEffectiveDisplay);
	void Set_Stack_BIcon_Effect(int32 Param_Index);
	void Set_Stack_BIcon_One_Item(const struct FOwnItemInfo& Info, bool IsEffectiveDisplay, bool* Visible);
	void SetNoneVisible(bool Visible);
	void SetStackBIconOneItemBase(EItemType InItemType, int32 InStackBNum, int32 InStackBMax, bool InIsEffectiveDisplay, bool* OutIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StackB_S_C">();
	}
	static class UWBP_StackB_S_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StackB_S_C>();
	}
};
static_assert(alignof(UWBP_StackB_S_C) == 0x000008, "Wrong alignment on UWBP_StackB_S_C");
static_assert(sizeof(UWBP_StackB_S_C) == 0x000308, "Wrong size on UWBP_StackB_S_C");
static_assert(offsetof(UWBP_StackB_S_C, UberGraphFrame) == 0x000278, "Member 'UWBP_StackB_S_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, CanvasPanel_0) == 0x000280, "Member 'UWBP_StackB_S_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, CanvasPanel_None) == 0x000288, "Member 'UWBP_StackB_S_C::CanvasPanel_None' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, Image_BG) == 0x000290, "Member 'UWBP_StackB_S_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, Image_BG_1) == 0x000298, "Member 'UWBP_StackB_S_C::Image_BG_1' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, Image_BG_2) == 0x0002A0, "Member 'UWBP_StackB_S_C::Image_BG_2' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, SBRuntimeTextBlock_M1) == 0x0002A8, "Member 'UWBP_StackB_S_C::SBRuntimeTextBlock_M1' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, SBRuntimeTextBlock_M2) == 0x0002B0, "Member 'UWBP_StackB_S_C::SBRuntimeTextBlock_M2' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, SBRuntimeTextBlock_M3) == 0x0002B8, "Member 'UWBP_StackB_S_C::SBRuntimeTextBlock_M3' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, SBRuntimeTextBlock_N1) == 0x0002C0, "Member 'UWBP_StackB_S_C::SBRuntimeTextBlock_N1' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, SBRuntimeTextBlock_N2) == 0x0002C8, "Member 'UWBP_StackB_S_C::SBRuntimeTextBlock_N2' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, SBRuntimeTextBlock_N3) == 0x0002D0, "Member 'UWBP_StackB_S_C::SBRuntimeTextBlock_N3' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, WidgetSwitcher_M) == 0x0002D8, "Member 'UWBP_StackB_S_C::WidgetSwitcher_M' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, WidgetSwitcher_N) == 0x0002E0, "Member 'UWBP_StackB_S_C::WidgetSwitcher_N' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, WidgetSwitcher_Status) == 0x0002E8, "Member 'UWBP_StackB_S_C::WidgetSwitcher_Status' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, ToolTip) == 0x0002F0, "Member 'UWBP_StackB_S_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, Stack_BMax) == 0x0002F8, "Member 'UWBP_StackB_S_C::Stack_BMax' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, StackNum) == 0x0002FC, "Member 'UWBP_StackB_S_C::StackNum' has a wrong offset!");
static_assert(offsetof(UWBP_StackB_S_C, NoneVisible) == 0x000300, "Member 'UWBP_StackB_S_C::NoneVisible' has a wrong offset!");

}

