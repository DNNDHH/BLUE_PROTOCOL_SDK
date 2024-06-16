#pragma once

 

// Package: CraftRecepiDesc

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CraftRecepiDesc.CraftRecepiDesc_C
// 0x0058 (0x02D0 - 0x0278)
class UCraftRecepiDesc_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtnWishListWhite_C*                 CmnBtnWishListWhite;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCraftRecepiDescProduct_C*              CraftRecepiDescProduct;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeedItemList_C*                        NeedItemList_132;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Engram;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCharacterCraftRecepi                  RecepiData;                                        // 0x02A8(0x0008)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	int32                                         CraftCount;                                        // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsCraftable;                                      // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67E9[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Request_ShowRate;                                  // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         Width;                                             // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Height;                                            // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Request_ShowRate__DelegateSignature();
	void ExecuteUbergraph_CraftRecepiDesc(int32 EntryPoint);
	void Construct();
	void SetRecepiData(const struct FCharacterCraftRecepi& Param_RecepiData);
	void UpdateMoneys();
	void BndEvt__CraftRecepiDesc_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__CraftRecepiDesc_CraftRecepiDescProduct_K2Node_ComponentBoundEvent_0_Request_ShowRate__DelegateSignature();
	void LoadImage(int32 InItemID);
	int32 CalclateMoney(bool* bIsDiscount);
	void IsCraftable(bool* Param_bIsCraftable);
	void UpdateMoneyAndItemList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CraftRecepiDesc_C">();
	}
	static class UCraftRecepiDesc_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftRecepiDesc_C>();
	}
};
static_assert(alignof(UCraftRecepiDesc_C) == 0x000008, "Wrong alignment on UCraftRecepiDesc_C");
static_assert(sizeof(UCraftRecepiDesc_C) == 0x0002D0, "Wrong size on UCraftRecepiDesc_C");
static_assert(offsetof(UCraftRecepiDesc_C, UberGraphFrame) == 0x000278, "Member 'UCraftRecepiDesc_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDesc_C, CmnBtnWishListWhite) == 0x000280, "Member 'UCraftRecepiDesc_C::CmnBtnWishListWhite' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDesc_C, CraftRecepiDescProduct) == 0x000288, "Member 'UCraftRecepiDesc_C::CraftRecepiDescProduct' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDesc_C, Image_BG) == 0x000290, "Member 'UCraftRecepiDesc_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDesc_C, NeedItemList_132) == 0x000298, "Member 'UCraftRecepiDesc_C::NeedItemList_132' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDesc_C, Txt_Engram) == 0x0002A0, "Member 'UCraftRecepiDesc_C::Txt_Engram' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDesc_C, RecepiData) == 0x0002A8, "Member 'UCraftRecepiDesc_C::RecepiData' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDesc_C, CraftCount) == 0x0002B0, "Member 'UCraftRecepiDesc_C::CraftCount' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDesc_C, bIsCraftable) == 0x0002B4, "Member 'UCraftRecepiDesc_C::bIsCraftable' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDesc_C, Request_ShowRate) == 0x0002B8, "Member 'UCraftRecepiDesc_C::Request_ShowRate' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDesc_C, Width) == 0x0002C8, "Member 'UCraftRecepiDesc_C::Width' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDesc_C, Height) == 0x0002CC, "Member 'UCraftRecepiDesc_C::Height' has a wrong offset!");

}

