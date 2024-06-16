#pragma once

 

// Package: UseTokenSelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UseTokenSelector.UseTokenSelector_C
// 0x0138 (0x03B0 - 0x0278)
class UUseTokenSelector_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButtonCmn08_C*                       Btn_TicketSelect;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_DialogAnchor;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_233;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_727;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_SelectedTicket;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_TicketSelect;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, int32>                    RateUpTokens;                                      // 0x02B0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CraftCount;                                        // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UseTokenDemand;                                    // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentTokenId;                                    // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67B1[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       Recepi;                                            // 0x0310(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTokenSelectorListView_C*               TokenSelector;                                     // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTokenSelectUpdate;                               // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnTokenSelectUpdate__DelegateSignature();
	void ExecuteUbergraph_UseTokenSelector(int32 EntryPoint);
	void ResetToken();
	void BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Destruct();
	void OnCloseTokenSelector();
	void OnSelectToken(int32 TokenID);
	void BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetRecepi(const struct FCraftMasterData& Param_Recepi);
	void IsUseToken(TArray<int32>* UseToken);
	void SetCraftCount(int32 Param_CraftCount);
	void IsMeetDemand(bool* MeetDemand);
	void IfMeetDemand(int32 Count, bool* MeetDemand);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UseTokenSelector_C">();
	}
	static class UUseTokenSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUseTokenSelector_C>();
	}
};
static_assert(alignof(UUseTokenSelector_C) == 0x000008, "Wrong alignment on UUseTokenSelector_C");
static_assert(sizeof(UUseTokenSelector_C) == 0x0003B0, "Wrong size on UUseTokenSelector_C");
static_assert(offsetof(UUseTokenSelector_C, UberGraphFrame) == 0x000278, "Member 'UUseTokenSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUseTokenSelector_C, Btn_TicketSelect) == 0x000280, "Member 'UUseTokenSelector_C::Btn_TicketSelect' has a wrong offset!");
static_assert(offsetof(UUseTokenSelector_C, Cvs_DialogAnchor) == 0x000288, "Member 'UUseTokenSelector_C::Cvs_DialogAnchor' has a wrong offset!");
static_assert(offsetof(UUseTokenSelector_C, Image_233) == 0x000290, "Member 'UUseTokenSelector_C::Image_233' has a wrong offset!");
static_assert(offsetof(UUseTokenSelector_C, Image_727) == 0x000298, "Member 'UUseTokenSelector_C::Image_727' has a wrong offset!");
static_assert(offsetof(UUseTokenSelector_C, Txt_SelectedTicket) == 0x0002A0, "Member 'UUseTokenSelector_C::Txt_SelectedTicket' has a wrong offset!");
static_assert(offsetof(UUseTokenSelector_C, Txt_TicketSelect) == 0x0002A8, "Member 'UUseTokenSelector_C::Txt_TicketSelect' has a wrong offset!");
static_assert(offsetof(UUseTokenSelector_C, RateUpTokens) == 0x0002B0, "Member 'UUseTokenSelector_C::RateUpTokens' has a wrong offset!");
static_assert(offsetof(UUseTokenSelector_C, CraftCount) == 0x000300, "Member 'UUseTokenSelector_C::CraftCount' has a wrong offset!");
static_assert(offsetof(UUseTokenSelector_C, UseTokenDemand) == 0x000304, "Member 'UUseTokenSelector_C::UseTokenDemand' has a wrong offset!");
static_assert(offsetof(UUseTokenSelector_C, CurrentTokenId) == 0x000308, "Member 'UUseTokenSelector_C::CurrentTokenId' has a wrong offset!");
static_assert(offsetof(UUseTokenSelector_C, Recepi) == 0x000310, "Member 'UUseTokenSelector_C::Recepi' has a wrong offset!");
static_assert(offsetof(UUseTokenSelector_C, TokenSelector) == 0x000398, "Member 'UUseTokenSelector_C::TokenSelector' has a wrong offset!");
static_assert(offsetof(UUseTokenSelector_C, OnTokenSelectUpdate) == 0x0003A0, "Member 'UUseTokenSelector_C::OnTokenSelectUpdate' has a wrong offset!");

}

