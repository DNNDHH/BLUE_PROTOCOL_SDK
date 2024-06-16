#pragma once

 

// Package: FlatShop_Credit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FlatShop_Credit.FlatShop_Credit_C
// 0x0220 (0x0498 - 0x0278)
class UFlatShop_Credit_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnGasha;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnGasha_1;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditBtn1_C*                 BtnTransition1;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditBtn1_C*                 BtnTransition1_1;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditBtn1_C*                 BtnTransition1C;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditBtn1_C*                 BtnTransition1C_1;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditBtn1_C*                 BtnTransition2;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditBtn1_C*                 BtnTransition2_1;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditBtn1_C*                 BtnTransition2_2;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditBtn1_C*                 BtnTransition2_3;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditBtn1_C*                 BtnTransition2C;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditBtn1_C*                 BtnTransition2C_1;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditBtn1_C*                 BtnTransition3;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditBtn1_C*                 BtnTransition3_1;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_10;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_11;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_12;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_01;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_01C;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_01u;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_01uC;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_02;                                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_02C;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_03;                                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_03C;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_03u;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_03uC;                                   // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_06;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_06C;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_06u;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_06uC;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_07;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_07u;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_08;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_09;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_09C;                                    // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_09u;                                    // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_10C;                                    // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_10u;                                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_11C;                                    // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_11u;                                    // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 CreditItem_12u;                                    // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Bg_05;                                       // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Bg_05u;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Bg_06;                                       // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Bg_06u;                                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Bg_07;                                       // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Bg_07u;                                      // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_border1;                                       // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_border2;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Separate_paid_free;                                // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchType_paid_free;                              // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchType_unification;                            // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchTypeGasha;                                   // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchTypeGasha_1;                                 // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtBtnGasha;                                       // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtBtnGasha_1;                                     // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBRmShopMenuType                             ShopType;                                          // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C9[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnGashaClicked;                                    // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRoseOrbClicked;                                  // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBPPointClicked;                                  // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Separate_Paid_Free;                                // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10CA[0x3];                                     // 0x0481(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Cost;                                              // 0x0484(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpiredDays;                                       // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SeasonPoint;                                       // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBtnClocked;                                      // 0x0494(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnGashaClicked__DelegateSignature();
	void OnRoseOrbClicked__DelegateSignature();
	void OnBPPointClicked__DelegateSignature();
	void ExecuteUbergraph_FlatShop_Credit(int32 EntryPoint);
	void ResetFlag();
	void BndEvt__FlatShop_Credit_BtnTransition2_3_K2Node_ComponentBoundEvent_17_EventBtnClicked__DelegateSignature();
	void BndEvt__FlatShop_Credit_BtnTransition2C_1_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature();
	void BndEvt__FlatShop_Credit_BtnTransition2_2_K2Node_ComponentBoundEvent_15_EventBtnClicked__DelegateSignature();
	void BndEvt__FlatShop_Credit_BtnTransition3_1_K2Node_ComponentBoundEvent_14_EventBtnClicked__DelegateSignature();
	void BndEvt__FlatShop_Credit_BtnTransition1C_1_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature();
	void BndEvt__FlatShop_Credit_BtnTransition1_1_K2Node_ComponentBoundEvent_12_EventBtnClicked__DelegateSignature();
	void BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnTransition2G_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature();
	void BndEvt__BtnTransition1G_K2Node_ComponentBoundEvent_7_EventBtnClicked__DelegateSignature();
	void Construct();
	void BndEvt__BtnTransition2_1_K2Node_ComponentBoundEvent_6_EventBtnClicked__DelegateSignature();
	void BndEvt__BtnTransition3_K2Node_ComponentBoundEvent_5_EventBtnClicked__DelegateSignature();
	void BndEvt__BtnTransition2_K2Node_ComponentBoundEvent_4_EventBtnClicked__DelegateSignature();
	void BndEvt__BtnTransition1_K2Node_ComponentBoundEvent_0_EventBtnClicked__DelegateSignature();
	void BndEvt__BtnGasha_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnGasha_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnGasha_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SetShopType(ESBRmShopMenuType Param_ShopType, bool IsDialog);
	void SetCreditNum(int32 Free, int32 Paid);
	void Set_Gasha_Credit_Num(int32 Free, int32 Paid, int32 SkyCoin, const struct FDateTime& FreeExpired, const struct FDateTime& PaidExpired, const struct FDateTime& BPPointExpired);
	void SetGashaCreditType(int32 Param_Index);
	void ChangeToTicketType(TArray<int32>& TicketIdList, TArray<int32>& TicketPriceList);
	void SetSwitchType(int32 Param_Index);
	void SetSeasonPoint(int32 Param_SeasonPoint);
	void SetRoseOrb(int32 Free, int32 Paid, const struct FDateTime& FreeExpired, const struct FDateTime& PaidExpired);
	void SetBPPoint(int32 BPPoint);
	void Init();
	void Reset_Count_Move();
	void SetProductCost(int32 Param_Cost, bool PaidOnly, bool* bIsLack);
	void UpdateProductCostByCoupon(int32 Rate, bool PaidOnly, bool* IsLack);
	void IsExpiredDay(const struct FDateTime& InDateTime, bool* IsExpired);
	void SetSelectNum(int32 Param_Amount);
	void UpdateProductCostBySeasonPass(int32 Rate, bool PaidOnly, bool* IsLack);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FlatShop_Credit_C">();
	}
	static class UFlatShop_Credit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlatShop_Credit_C>();
	}
};
static_assert(alignof(UFlatShop_Credit_C) == 0x000008, "Wrong alignment on UFlatShop_Credit_C");
static_assert(sizeof(UFlatShop_Credit_C) == 0x000498, "Wrong size on UFlatShop_Credit_C");
static_assert(offsetof(UFlatShop_Credit_C, UberGraphFrame) == 0x000278, "Member 'UFlatShop_Credit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, BtnGasha) == 0x000280, "Member 'UFlatShop_Credit_C::BtnGasha' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, BtnGasha_1) == 0x000288, "Member 'UFlatShop_Credit_C::BtnGasha_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, BtnTransition1) == 0x000290, "Member 'UFlatShop_Credit_C::BtnTransition1' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, BtnTransition1_1) == 0x000298, "Member 'UFlatShop_Credit_C::BtnTransition1_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, BtnTransition1C) == 0x0002A0, "Member 'UFlatShop_Credit_C::BtnTransition1C' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, BtnTransition1C_1) == 0x0002A8, "Member 'UFlatShop_Credit_C::BtnTransition1C_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, BtnTransition2) == 0x0002B0, "Member 'UFlatShop_Credit_C::BtnTransition2' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, BtnTransition2_1) == 0x0002B8, "Member 'UFlatShop_Credit_C::BtnTransition2_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, BtnTransition2_2) == 0x0002C0, "Member 'UFlatShop_Credit_C::BtnTransition2_2' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, BtnTransition2_3) == 0x0002C8, "Member 'UFlatShop_Credit_C::BtnTransition2_3' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, BtnTransition2C) == 0x0002D0, "Member 'UFlatShop_Credit_C::BtnTransition2C' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, BtnTransition2C_1) == 0x0002D8, "Member 'UFlatShop_Credit_C::BtnTransition2C_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, BtnTransition3) == 0x0002E0, "Member 'UFlatShop_Credit_C::BtnTransition3' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, BtnTransition3_1) == 0x0002E8, "Member 'UFlatShop_Credit_C::BtnTransition3_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_10) == 0x0002F0, "Member 'UFlatShop_Credit_C::CreditItem_10' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_11) == 0x0002F8, "Member 'UFlatShop_Credit_C::CreditItem_11' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_12) == 0x000300, "Member 'UFlatShop_Credit_C::CreditItem_12' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_01) == 0x000308, "Member 'UFlatShop_Credit_C::CreditItem_01' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_01C) == 0x000310, "Member 'UFlatShop_Credit_C::CreditItem_01C' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_01u) == 0x000318, "Member 'UFlatShop_Credit_C::CreditItem_01u' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_01uC) == 0x000320, "Member 'UFlatShop_Credit_C::CreditItem_01uC' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_02) == 0x000328, "Member 'UFlatShop_Credit_C::CreditItem_02' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_02C) == 0x000330, "Member 'UFlatShop_Credit_C::CreditItem_02C' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_03) == 0x000338, "Member 'UFlatShop_Credit_C::CreditItem_03' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_03C) == 0x000340, "Member 'UFlatShop_Credit_C::CreditItem_03C' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_03u) == 0x000348, "Member 'UFlatShop_Credit_C::CreditItem_03u' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_03uC) == 0x000350, "Member 'UFlatShop_Credit_C::CreditItem_03uC' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_06) == 0x000358, "Member 'UFlatShop_Credit_C::CreditItem_06' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_06C) == 0x000360, "Member 'UFlatShop_Credit_C::CreditItem_06C' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_06u) == 0x000368, "Member 'UFlatShop_Credit_C::CreditItem_06u' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_06uC) == 0x000370, "Member 'UFlatShop_Credit_C::CreditItem_06uC' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_07) == 0x000378, "Member 'UFlatShop_Credit_C::CreditItem_07' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_07u) == 0x000380, "Member 'UFlatShop_Credit_C::CreditItem_07u' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_08) == 0x000388, "Member 'UFlatShop_Credit_C::CreditItem_08' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_09) == 0x000390, "Member 'UFlatShop_Credit_C::CreditItem_09' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_09C) == 0x000398, "Member 'UFlatShop_Credit_C::CreditItem_09C' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_09u) == 0x0003A0, "Member 'UFlatShop_Credit_C::CreditItem_09u' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_10C) == 0x0003A8, "Member 'UFlatShop_Credit_C::CreditItem_10C' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_10u) == 0x0003B0, "Member 'UFlatShop_Credit_C::CreditItem_10u' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_11C) == 0x0003B8, "Member 'UFlatShop_Credit_C::CreditItem_11C' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_11u) == 0x0003C0, "Member 'UFlatShop_Credit_C::CreditItem_11u' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, CreditItem_12u) == 0x0003C8, "Member 'UFlatShop_Credit_C::CreditItem_12u' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, Image_Bg_05) == 0x0003D0, "Member 'UFlatShop_Credit_C::Image_Bg_05' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, Image_Bg_05u) == 0x0003D8, "Member 'UFlatShop_Credit_C::Image_Bg_05u' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, Image_Bg_06) == 0x0003E0, "Member 'UFlatShop_Credit_C::Image_Bg_06' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, Image_Bg_06u) == 0x0003E8, "Member 'UFlatShop_Credit_C::Image_Bg_06u' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, Image_Bg_07) == 0x0003F0, "Member 'UFlatShop_Credit_C::Image_Bg_07' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, Image_Bg_07u) == 0x0003F8, "Member 'UFlatShop_Credit_C::Image_Bg_07u' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, Img_border1) == 0x000400, "Member 'UFlatShop_Credit_C::Img_border1' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, Img_border2) == 0x000408, "Member 'UFlatShop_Credit_C::Img_border2' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, Separate_paid_free) == 0x000410, "Member 'UFlatShop_Credit_C::Separate_paid_free' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, SwitchType_paid_free) == 0x000418, "Member 'UFlatShop_Credit_C::SwitchType_paid_free' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, SwitchType_unification) == 0x000420, "Member 'UFlatShop_Credit_C::SwitchType_unification' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, SwitchTypeGasha) == 0x000428, "Member 'UFlatShop_Credit_C::SwitchTypeGasha' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, SwitchTypeGasha_1) == 0x000430, "Member 'UFlatShop_Credit_C::SwitchTypeGasha_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, TxtBtnGasha) == 0x000438, "Member 'UFlatShop_Credit_C::TxtBtnGasha' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, TxtBtnGasha_1) == 0x000440, "Member 'UFlatShop_Credit_C::TxtBtnGasha_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, ShopType) == 0x000448, "Member 'UFlatShop_Credit_C::ShopType' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, OnGashaClicked) == 0x000450, "Member 'UFlatShop_Credit_C::OnGashaClicked' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, OnRoseOrbClicked) == 0x000460, "Member 'UFlatShop_Credit_C::OnRoseOrbClicked' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, OnBPPointClicked) == 0x000470, "Member 'UFlatShop_Credit_C::OnBPPointClicked' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, Separate_Paid_Free) == 0x000480, "Member 'UFlatShop_Credit_C::Separate_Paid_Free' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, Cost) == 0x000484, "Member 'UFlatShop_Credit_C::Cost' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, ExpiredDays) == 0x000488, "Member 'UFlatShop_Credit_C::ExpiredDays' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, Amount) == 0x00048C, "Member 'UFlatShop_Credit_C::Amount' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, SeasonPoint) == 0x000490, "Member 'UFlatShop_Credit_C::SeasonPoint' has a wrong offset!");
static_assert(offsetof(UFlatShop_Credit_C, IsBtnClocked) == 0x000494, "Member 'UFlatShop_Credit_C::IsBtnClocked' has a wrong offset!");

}

