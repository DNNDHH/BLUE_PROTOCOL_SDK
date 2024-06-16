#pragma once

 

// Package: MaterialButtonView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MaterialButtonView.MaterialButtonView_C
// 0x01F0 (0x0468 - 0x0278)
class UMaterialButtonView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Bdr_ItemLess;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnReselect;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UContainerGridView_C*                   ContainerGridView;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_286;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_661;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_901;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1020;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Lock;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_MaterialAmount;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_MaterialName;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_NeedMoney;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_WeaponName;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   GridView;                                          // 0x02F0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FOwnItemInfo                           TargetItem;                                        // 0x0300(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSBStackBMasterData                    StackBMasterData;                                  // 0x0418(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBTemporallyStorage*                   MaterialStorage;                                   // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseTicket;                                        // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6E63[0x7];                                     // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnReselect;                                        // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnReselect__DelegateSignature();
	void ExecuteUbergraph_MaterialButtonView(int32 EntryPoint);
	void BndEvt__MaterialButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void Construct();
	void Initialize();
	void InitializeTickets();
	void UpdateLackColor(class UTextBlock* ColorText, bool IsLack);
	void SetData(const struct FOwnItemInfo& Param_TargetItem, TArray<struct FOwnItemInfo>& Param_GridView, bool Param_bUseTicket);
	void UpdateDiscountColor(class UTextBlock* _____, bool* IsDiscount);
	void GetCalculatedItemNum(int32 BaseAmount, int32 SupportItemId, int32* CalculatedAmount);
	void CalclateRewardBoostSupportItemNum(int32 BaseAmount, int32 SupportItemId, int32* CalculatedAmount);

	void GetUseMoney(int32* Money) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MaterialButtonView_C">();
	}
	static class UMaterialButtonView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialButtonView_C>();
	}
};
static_assert(alignof(UMaterialButtonView_C) == 0x000008, "Wrong alignment on UMaterialButtonView_C");
static_assert(sizeof(UMaterialButtonView_C) == 0x000468, "Wrong size on UMaterialButtonView_C");
static_assert(offsetof(UMaterialButtonView_C, UberGraphFrame) == 0x000278, "Member 'UMaterialButtonView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, Bdr_ItemLess) == 0x000280, "Member 'UMaterialButtonView_C::Bdr_ItemLess' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, BtnReselect) == 0x000288, "Member 'UMaterialButtonView_C::BtnReselect' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, ContainerGridView) == 0x000290, "Member 'UMaterialButtonView_C::ContainerGridView' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, Image) == 0x000298, "Member 'UMaterialButtonView_C::Image' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, Image_1) == 0x0002A0, "Member 'UMaterialButtonView_C::Image_1' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, Image_286) == 0x0002A8, "Member 'UMaterialButtonView_C::Image_286' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, Image_661) == 0x0002B0, "Member 'UMaterialButtonView_C::Image_661' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, Image_901) == 0x0002B8, "Member 'UMaterialButtonView_C::Image_901' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, Image_1020) == 0x0002C0, "Member 'UMaterialButtonView_C::Image_1020' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, Img_Lock) == 0x0002C8, "Member 'UMaterialButtonView_C::Img_Lock' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, Txt_MaterialAmount) == 0x0002D0, "Member 'UMaterialButtonView_C::Txt_MaterialAmount' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, Txt_MaterialName) == 0x0002D8, "Member 'UMaterialButtonView_C::Txt_MaterialName' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, Txt_NeedMoney) == 0x0002E0, "Member 'UMaterialButtonView_C::Txt_NeedMoney' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, Txt_WeaponName) == 0x0002E8, "Member 'UMaterialButtonView_C::Txt_WeaponName' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, GridView) == 0x0002F0, "Member 'UMaterialButtonView_C::GridView' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, TargetItem) == 0x000300, "Member 'UMaterialButtonView_C::TargetItem' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, StackBMasterData) == 0x000418, "Member 'UMaterialButtonView_C::StackBMasterData' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, MaterialStorage) == 0x000448, "Member 'UMaterialButtonView_C::MaterialStorage' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, bUseTicket) == 0x000450, "Member 'UMaterialButtonView_C::bUseTicket' has a wrong offset!");
static_assert(offsetof(UMaterialButtonView_C, OnReselect) == 0x000458, "Member 'UMaterialButtonView_C::OnReselect' has a wrong offset!");

}

