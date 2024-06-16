#pragma once

 

// Package: TokenList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TokenList.TokenList_C
// 0x00B0 (0x0328 - 0x0278)
class UTokenList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTokenItem_C*                           TokenItem;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTokenItem_C*                           TokenItem_1;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTokenItem_C*                           TokenItem_2;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTokenItem_C*                           TokenItem_3;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTokenItem_C*                           TokenItem_4;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTokenItem_C*                           TokenItem_5;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Items;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     MoneyImageList;                                    // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ASBPlayerController*                    PlayerController;                                  // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBRmShopComponent*                     RmShopCmp;                                         // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBToken*                               Token;                                             // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBTokenCategory                              SelectedTokenCategory;                             // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57DC[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   MasterData;                                        // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelectBlankText;                                 // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57DD[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnGetExpiredBlankText;                             // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnGetTokenListBlankText;                           // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMoneyListEnd;                                    // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnGetExpiredBlankText__DelegateSignature();
	void OnGetTokenListBlankText__DelegateSignature();
	void OnMoneyListEnd__DelegateSignature();
	void ExecuteUbergraph_TokenList(int32 EntryPoint);
	void SetExpiredTokenList();
	void SetTokenList(int32 Category);
	void OnGetExpiredList(const struct FSBExpiredTokenStates& States);
	void GetStateList(const struct FSBTokenStates& States);
	void GetCryptocurerncy(const bool Result, const int32 RetCode, const struct FSBCryptoCurrency& Cryptocurrency);
	void SetMoneyList();
	void Destruct();
	void OnGetMyCharacterInfoDelegate______0(bool Result);
	void Construct();
	void SetTokenListFunc(const struct FSBTokenStates& TokenStates);
	void SetExpiredTokenListFunc(const struct FSBExpiredTokenStates& SBExpiredTokenStates);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TokenList_C">();
	}
	static class UTokenList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTokenList_C>();
	}
};
static_assert(alignof(UTokenList_C) == 0x000008, "Wrong alignment on UTokenList_C");
static_assert(sizeof(UTokenList_C) == 0x000328, "Wrong size on UTokenList_C");
static_assert(offsetof(UTokenList_C, UberGraphFrame) == 0x000278, "Member 'UTokenList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTokenList_C, TokenItem) == 0x000280, "Member 'UTokenList_C::TokenItem' has a wrong offset!");
static_assert(offsetof(UTokenList_C, TokenItem_1) == 0x000288, "Member 'UTokenList_C::TokenItem_1' has a wrong offset!");
static_assert(offsetof(UTokenList_C, TokenItem_2) == 0x000290, "Member 'UTokenList_C::TokenItem_2' has a wrong offset!");
static_assert(offsetof(UTokenList_C, TokenItem_3) == 0x000298, "Member 'UTokenList_C::TokenItem_3' has a wrong offset!");
static_assert(offsetof(UTokenList_C, TokenItem_4) == 0x0002A0, "Member 'UTokenList_C::TokenItem_4' has a wrong offset!");
static_assert(offsetof(UTokenList_C, TokenItem_5) == 0x0002A8, "Member 'UTokenList_C::TokenItem_5' has a wrong offset!");
static_assert(offsetof(UTokenList_C, VB_Items) == 0x0002B0, "Member 'UTokenList_C::VB_Items' has a wrong offset!");
static_assert(offsetof(UTokenList_C, MoneyImageList) == 0x0002B8, "Member 'UTokenList_C::MoneyImageList' has a wrong offset!");
static_assert(offsetof(UTokenList_C, PlayerController) == 0x0002C8, "Member 'UTokenList_C::PlayerController' has a wrong offset!");
static_assert(offsetof(UTokenList_C, RmShopCmp) == 0x0002D0, "Member 'UTokenList_C::RmShopCmp' has a wrong offset!");
static_assert(offsetof(UTokenList_C, Token) == 0x0002D8, "Member 'UTokenList_C::Token' has a wrong offset!");
static_assert(offsetof(UTokenList_C, SelectedTokenCategory) == 0x0002E0, "Member 'UTokenList_C::SelectedTokenCategory' has a wrong offset!");
static_assert(offsetof(UTokenList_C, MasterData) == 0x0002E8, "Member 'UTokenList_C::MasterData' has a wrong offset!");
static_assert(offsetof(UTokenList_C, IsSelectBlankText) == 0x0002F0, "Member 'UTokenList_C::IsSelectBlankText' has a wrong offset!");
static_assert(offsetof(UTokenList_C, OnGetExpiredBlankText) == 0x0002F8, "Member 'UTokenList_C::OnGetExpiredBlankText' has a wrong offset!");
static_assert(offsetof(UTokenList_C, OnGetTokenListBlankText) == 0x000308, "Member 'UTokenList_C::OnGetTokenListBlankText' has a wrong offset!");
static_assert(offsetof(UTokenList_C, OnMoneyListEnd) == 0x000318, "Member 'UTokenList_C::OnMoneyListEnd' has a wrong offset!");

}

