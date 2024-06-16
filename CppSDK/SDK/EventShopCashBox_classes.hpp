#pragma once

 

// Package: EventShopCashBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopCashBox.EventShopCashBox_C
// 0x0078 (0x02F0 - 0x0278)
class UEventShopCashBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEventShopCashBox_Item_C*               Bp_Token_001;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopCashBox_Item_C*               Bp_Token_002;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopCashBox_Item_C*               Bp_Token_003;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopCashBox_Item_C*               Bp_Token_004;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopCashBox_Item_C*               Bp_Token_005;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopCashBox_Item_C*               Bp_Token_006;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_Purchase;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_ArrowM_C*                      CmnAnim_ArrowM;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPurchased;                                       // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UEventShopCashBox_Item_C*>       Bp_Token_List;                                     // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<int32>                                 TokenIdList;                                       // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnPurchased__DelegateSignature();
	void ExecuteUbergraph_EventShopCashBox(int32 EntryPoint);
	void BndEvt__EventShopCashBox_Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Construct();
	void Init();
	void SetTokenList(TArray<int32>& TokenList);
	void SetTokenAmount(int32 TokenID, int32 Price);
	void ResetAmount();
	void GetAmount(int32 TokenID, int32* Amount);
	void SetShopType(EShopType ShopType);
	void UpdatePurchaseButton(TArray<int32>& PriceList);
	void SetClickInputState(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopCashBox_C">();
	}
	static class UEventShopCashBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopCashBox_C>();
	}
};
static_assert(alignof(UEventShopCashBox_C) == 0x000008, "Wrong alignment on UEventShopCashBox_C");
static_assert(sizeof(UEventShopCashBox_C) == 0x0002F0, "Wrong size on UEventShopCashBox_C");
static_assert(offsetof(UEventShopCashBox_C, UberGraphFrame) == 0x000278, "Member 'UEventShopCashBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventShopCashBox_C, Bp_Token_001) == 0x000280, "Member 'UEventShopCashBox_C::Bp_Token_001' has a wrong offset!");
static_assert(offsetof(UEventShopCashBox_C, Bp_Token_002) == 0x000288, "Member 'UEventShopCashBox_C::Bp_Token_002' has a wrong offset!");
static_assert(offsetof(UEventShopCashBox_C, Bp_Token_003) == 0x000290, "Member 'UEventShopCashBox_C::Bp_Token_003' has a wrong offset!");
static_assert(offsetof(UEventShopCashBox_C, Bp_Token_004) == 0x000298, "Member 'UEventShopCashBox_C::Bp_Token_004' has a wrong offset!");
static_assert(offsetof(UEventShopCashBox_C, Bp_Token_005) == 0x0002A0, "Member 'UEventShopCashBox_C::Bp_Token_005' has a wrong offset!");
static_assert(offsetof(UEventShopCashBox_C, Bp_Token_006) == 0x0002A8, "Member 'UEventShopCashBox_C::Bp_Token_006' has a wrong offset!");
static_assert(offsetof(UEventShopCashBox_C, Btn_Purchase) == 0x0002B0, "Member 'UEventShopCashBox_C::Btn_Purchase' has a wrong offset!");
static_assert(offsetof(UEventShopCashBox_C, CmnAnim_ArrowM) == 0x0002B8, "Member 'UEventShopCashBox_C::CmnAnim_ArrowM' has a wrong offset!");
static_assert(offsetof(UEventShopCashBox_C, OnPurchased) == 0x0002C0, "Member 'UEventShopCashBox_C::OnPurchased' has a wrong offset!");
static_assert(offsetof(UEventShopCashBox_C, Bp_Token_List) == 0x0002D0, "Member 'UEventShopCashBox_C::Bp_Token_List' has a wrong offset!");
static_assert(offsetof(UEventShopCashBox_C, TokenIdList) == 0x0002E0, "Member 'UEventShopCashBox_C::TokenIdList' has a wrong offset!");

}

