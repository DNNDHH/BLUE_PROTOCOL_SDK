#pragma once

 

// Package: EventShopCheckList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"
#include "EventShopCheckList_ItemType_structs.hpp"
#include "EventShopCheckList_DestType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopCheckList.EventShopCheckList_C
// 0x0100 (0x0378 - 0x0278)
class UEventShopCheckList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnmOut;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmIn;                                             // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BgFullScreen;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Box_EquipmentWarning;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_Cancel;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_Exchange;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_IconList;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_ArrowM_C*                      Icon_Arrow;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_1;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_2;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_ItemList;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Title;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedExchange;                                 // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedCancel;                                   // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FSBEventShopPurchaseItemInfo>   CheckList;                                         // 0x0308(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FMargin                                In_Padding;                                        // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsBag;                                             // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_64E7[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTemporallyStorage*                   Inventory_ItemBag;                                 // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   Inventory_CharaStorage;                            // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   Inventory_EquipBag;                                // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    As_SBPlayer_Controller;                            // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDestStorage;                                     // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDestItemBag;                                     // 0x0351(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDestEquipBag;                                    // 0x0352(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDestOther;                                       // 0x0353(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64E8[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    DataCache;                                         // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOverItem;                                        // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOverEquip;                                       // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64E9[0x6];                                     // 0x0362(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTemporallyStorage*                   Inventory_EquipStorage;                            // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOverStorageE;                                    // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AnyItemOver;                                       // 0x0371(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFinished;                                        // 0x0372(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClickedExchange__DelegateSignature();
	void OnClickedCancel__DelegateSignature();
	void ExecuteUbergraph_EventShopCheckList(int32 EntryPoint);
	void BndEvt__EventShopCheckList_BgFullScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__EventShopCheckList_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature();
	void OnEsc();
	void Destruct();
	void BndEvt__EventShopCheckList_Btn_Cancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__EventShopCheckList_Btn_Exchange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Construct();
	void CreateItemList_Event();
	void Get_Item_Type(int32 ID, EItemType* Type);
	void Initialize();
	void CreateIconList();
	void CreateItemList_Storage_I();
	void CreateItemList_Storage_E();
	void CreateItemList_Storage_I_Craft();
	void Create_Item_List_Bag_I();
	void Create_Item_List_Bag_E();
	void CreateItemList_Other();
	void CheckDestination(ESBRewardItemType Type, EventShopCheckList_ItemType* NewParam1);
	void GetCheckListItemType(ESBRewardItemType RewardItemType, EventShopCheckList_DestType DestType, bool* IsOk);
	void GetStock_ItemOther(ESBRewardItemType RewardItemType, int32 ItemId, int32* Num);
	void GetLimitItemOther(ESBRewardItemType RewardItemType, int32 ItemId, int32* Num);
	void GetItemOtherType(ESBRewardItemType RewardItemType, bool* IsOk, EventShopCheckList_ItemType* CheckListOtherType);
	void GetLiquidMemoryNum(int32 ID, int32* Num);
	void SetDisabledExchangeButton(bool Disabled);
	void CheckOther2_AlreadyHave(int32 ItemId, ESBRewardItemType RewardItemType, bool* IsOver);
	void GetTokenMax(int32 TokenID, int32* Limit);
	void GetItemNameByOther(ESBRewardItemType Type, int32 ID, class FString* Param_Name);
	void IsHaveCutomPartsById(int32 ID, bool* Ret);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopCheckList_C">();
	}
	static class UEventShopCheckList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopCheckList_C>();
	}
};
static_assert(alignof(UEventShopCheckList_C) == 0x000008, "Wrong alignment on UEventShopCheckList_C");
static_assert(sizeof(UEventShopCheckList_C) == 0x000378, "Wrong size on UEventShopCheckList_C");
static_assert(offsetof(UEventShopCheckList_C, UberGraphFrame) == 0x000278, "Member 'UEventShopCheckList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, AnmOut) == 0x000280, "Member 'UEventShopCheckList_C::AnmOut' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, AnmIn) == 0x000288, "Member 'UEventShopCheckList_C::AnmIn' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, BgFullScreen) == 0x000290, "Member 'UEventShopCheckList_C::BgFullScreen' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, Box_EquipmentWarning) == 0x000298, "Member 'UEventShopCheckList_C::Box_EquipmentWarning' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, Btn_Cancel) == 0x0002A0, "Member 'UEventShopCheckList_C::Btn_Cancel' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, Btn_Exchange) == 0x0002A8, "Member 'UEventShopCheckList_C::Btn_Exchange' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, CmnClose01) == 0x0002B0, "Member 'UEventShopCheckList_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, GridPanel_IconList) == 0x0002B8, "Member 'UEventShopCheckList_C::GridPanel_IconList' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, Icon_Arrow) == 0x0002C0, "Member 'UEventShopCheckList_C::Icon_Arrow' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, Line_1) == 0x0002C8, "Member 'UEventShopCheckList_C::Line_1' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, Line_2) == 0x0002D0, "Member 'UEventShopCheckList_C::Line_2' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, ScrollBox_ItemList) == 0x0002D8, "Member 'UEventShopCheckList_C::ScrollBox_ItemList' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, Txt_Title) == 0x0002E0, "Member 'UEventShopCheckList_C::Txt_Title' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, OnClickedExchange) == 0x0002E8, "Member 'UEventShopCheckList_C::OnClickedExchange' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, OnClickedCancel) == 0x0002F8, "Member 'UEventShopCheckList_C::OnClickedCancel' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, CheckList) == 0x000308, "Member 'UEventShopCheckList_C::CheckList' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, In_Padding) == 0x000318, "Member 'UEventShopCheckList_C::In_Padding' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, IsBag) == 0x000328, "Member 'UEventShopCheckList_C::IsBag' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, Inventory_ItemBag) == 0x000330, "Member 'UEventShopCheckList_C::Inventory_ItemBag' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, Inventory_CharaStorage) == 0x000338, "Member 'UEventShopCheckList_C::Inventory_CharaStorage' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, Inventory_EquipBag) == 0x000340, "Member 'UEventShopCheckList_C::Inventory_EquipBag' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, As_SBPlayer_Controller) == 0x000348, "Member 'UEventShopCheckList_C::As_SBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, IsDestStorage) == 0x000350, "Member 'UEventShopCheckList_C::IsDestStorage' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, IsDestItemBag) == 0x000351, "Member 'UEventShopCheckList_C::IsDestItemBag' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, IsDestEquipBag) == 0x000352, "Member 'UEventShopCheckList_C::IsDestEquipBag' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, IsDestOther) == 0x000353, "Member 'UEventShopCheckList_C::IsDestOther' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, DataCache) == 0x000358, "Member 'UEventShopCheckList_C::DataCache' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, IsOverItem) == 0x000360, "Member 'UEventShopCheckList_C::IsOverItem' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, IsOverEquip) == 0x000361, "Member 'UEventShopCheckList_C::IsOverEquip' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, Inventory_EquipStorage) == 0x000368, "Member 'UEventShopCheckList_C::Inventory_EquipStorage' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, IsOverStorageE) == 0x000370, "Member 'UEventShopCheckList_C::IsOverStorageE' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, AnyItemOver) == 0x000371, "Member 'UEventShopCheckList_C::AnyItemOver' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_C, IsFinished) == 0x000372, "Member 'UEventShopCheckList_C::IsFinished' has a wrong offset!");

}

