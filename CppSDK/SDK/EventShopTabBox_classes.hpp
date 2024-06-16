#pragma once

 

// Package: EventShopTabBox

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopTabBox.EventShopTabBox_C
// 0x0090 (0x0308 - 0x0278)
class UEventShopTabBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEventShopTabBox_Banner_C*              Banner1;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopTabBox_Banner_C*              Banner2;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopTabBox_Banner_C*              Banner3;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           EffectGrp;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Next;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Prev;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SelectFrame;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickBanner;                                     // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         PageMax;                                           // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HeaderPageIndex;                                   // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BannerMax;                                         // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectEventId;                                     // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectBannerId;                                    // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63EA[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopTabBox_Banner_C*              SelectBanner;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBEventShopMasterData>         List_Event;                                        // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UEventShopTabBox_Banner_C*>      TagList;                                           // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void OnClickBanner__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_EventShopTabBox(int32 EntryPoint);
	void Construct();
	void BndEvt__Banner3_K2Node_ComponentBoundEvent_10_OnUnHovered__DelegateSignature();
	void BndEvt__Banner2_K2Node_ComponentBoundEvent_9_OnUnHovered__DelegateSignature();
	void BndEvt__Banner1_K2Node_ComponentBoundEvent_8_OnUnHovered__DelegateSignature();
	void BndEvt__Banner3_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature();
	void BndEvt__Banner2_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
	void BndEvt__Banner1_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature();
	void BndEvt__Banner3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__Banner2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__EventShopTabBox_Banner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Initialize();
	void CreateEventList(TArray<struct FSBEventShopMasterData>& EventList);
	void UpdateTabInfo(bool Prev, bool Next, int32 Click);
	void UpdateBannerInfo();
	void SetBannerEnable();
	void SetBannerSelect(class UEventShopTabBox_Banner_C* Banner, bool Force);
	void CheckPagerBtn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopTabBox_C">();
	}
	static class UEventShopTabBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopTabBox_C>();
	}
};
static_assert(alignof(UEventShopTabBox_C) == 0x000008, "Wrong alignment on UEventShopTabBox_C");
static_assert(sizeof(UEventShopTabBox_C) == 0x000308, "Wrong size on UEventShopTabBox_C");
static_assert(offsetof(UEventShopTabBox_C, UberGraphFrame) == 0x000278, "Member 'UEventShopTabBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, Banner1) == 0x000280, "Member 'UEventShopTabBox_C::Banner1' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, Banner2) == 0x000288, "Member 'UEventShopTabBox_C::Banner2' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, Banner3) == 0x000290, "Member 'UEventShopTabBox_C::Banner3' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, EffectGrp) == 0x000298, "Member 'UEventShopTabBox_C::EffectGrp' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, SBButton_Next) == 0x0002A0, "Member 'UEventShopTabBox_C::SBButton_Next' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, SBButton_Prev) == 0x0002A8, "Member 'UEventShopTabBox_C::SBButton_Prev' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, SelectFrame) == 0x0002B0, "Member 'UEventShopTabBox_C::SelectFrame' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, OnClickBanner) == 0x0002B8, "Member 'UEventShopTabBox_C::OnClickBanner' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, PageMax) == 0x0002C8, "Member 'UEventShopTabBox_C::PageMax' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, HeaderPageIndex) == 0x0002CC, "Member 'UEventShopTabBox_C::HeaderPageIndex' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, BannerMax) == 0x0002D0, "Member 'UEventShopTabBox_C::BannerMax' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, SelectEventId) == 0x0002D4, "Member 'UEventShopTabBox_C::SelectEventId' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, SelectBannerId) == 0x0002D8, "Member 'UEventShopTabBox_C::SelectBannerId' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, SelectBanner) == 0x0002E0, "Member 'UEventShopTabBox_C::SelectBanner' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, List_Event) == 0x0002E8, "Member 'UEventShopTabBox_C::List_Event' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_C, TagList) == 0x0002F8, "Member 'UEventShopTabBox_C::TagList' has a wrong offset!");

}

