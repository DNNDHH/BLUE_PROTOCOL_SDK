#pragma once

 

// Package: RecepiListItemBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RecepiListItemBtn.RecepiListItemBtn_C
// 0x00F0 (0x0368 - 0x0278)
class URecepiListItemBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAttribute_C*                           Attribute;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg_L;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg_S;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Select;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasCraft;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBonusSmall_C*                       CmnBonus;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_WishlistRegisted;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipPosition_C*                       EquipPosition;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_183;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ImagineName;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_selected;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNum;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Tag;                                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Tag_Bg;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTimeLimitIcon_C*                       TimeLimitIcon;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_AdventurerRank;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Type;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Stat;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FMasterImagineRecepi                   ImagineRecpiData;                                  // 0x0328(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBImagineCategoryType                        ImagineType;                                       // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCrafted;                                         // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSelect__DelegateSignature(const struct FMasterImagineRecepi& MasterData, class URecepiListItemBtn_C* SelectedItem);
	void ExecuteUbergraph_RecepiListItemBtn(int32 EntryPoint);
	void Update_Wishlist();
	void OnUpdateReward(class UObject* Sender, class UObject* Param);
	void Unbind_Boost();
	void Bind_Boost();
	void Destruct();
	void Destruct_RecepiAttach();
	void Construct_RecepiAttach();
	void OnRecepiUpdated(int32 RecepiId);
	void Check_Adv_Rank_Reached();
	void Set_Crafted(bool Param_IsCrafted);
	void ApplyImagineData();
	void Set_RecepiData(const struct FMasterImagineRecepi& Param_ImagineRecpiData);
	void BndEvt__Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void GetRecepi(struct FMasterImagineRecepi* Master, bool* bIsCrafted);
	void UpdateRewardBoost();
	void Bind_Wishlist_Update();
	void Unbind_Wishlist_Update();
	void SetSelectedVisible(bool bVisible);
	void UpdateTimeLimit();
	void UpdateNewMark(int32 RecepiId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RecepiListItemBtn_C">();
	}
	static class URecepiListItemBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URecepiListItemBtn_C>();
	}
};
static_assert(alignof(URecepiListItemBtn_C) == 0x000008, "Wrong alignment on URecepiListItemBtn_C");
static_assert(sizeof(URecepiListItemBtn_C) == 0x000368, "Wrong size on URecepiListItemBtn_C");
static_assert(offsetof(URecepiListItemBtn_C, UberGraphFrame) == 0x000278, "Member 'URecepiListItemBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, Attribute) == 0x000280, "Member 'URecepiListItemBtn_C::Attribute' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, Bg_L) == 0x000288, "Member 'URecepiListItemBtn_C::Bg_L' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, Bg_S) == 0x000290, "Member 'URecepiListItemBtn_C::Bg_S' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, Btn_Select) == 0x000298, "Member 'URecepiListItemBtn_C::Btn_Select' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, CanvasCraft) == 0x0002A0, "Member 'URecepiListItemBtn_C::CanvasCraft' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, CmnBonus) == 0x0002A8, "Member 'URecepiListItemBtn_C::CmnBonus' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, CommonIcon) == 0x0002B0, "Member 'URecepiListItemBtn_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, Cvs_WishlistRegisted) == 0x0002B8, "Member 'URecepiListItemBtn_C::Cvs_WishlistRegisted' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, EquipPosition) == 0x0002C0, "Member 'URecepiListItemBtn_C::EquipPosition' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, Image_183) == 0x0002C8, "Member 'URecepiListItemBtn_C::Image_183' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, ImagineName) == 0x0002D0, "Member 'URecepiListItemBtn_C::ImagineName' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, Img_selected) == 0x0002D8, "Member 'URecepiListItemBtn_C::Img_selected' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, ItemNum) == 0x0002E0, "Member 'URecepiListItemBtn_C::ItemNum' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, Tag) == 0x0002E8, "Member 'URecepiListItemBtn_C::Tag' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, Tag_Bg) == 0x0002F0, "Member 'URecepiListItemBtn_C::Tag_Bg' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, TimeLimitIcon) == 0x0002F8, "Member 'URecepiListItemBtn_C::TimeLimitIcon' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, Txt_AdventurerRank) == 0x000300, "Member 'URecepiListItemBtn_C::Txt_AdventurerRank' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, Txt_Type) == 0x000308, "Member 'URecepiListItemBtn_C::Txt_Type' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, WS_Stat) == 0x000310, "Member 'URecepiListItemBtn_C::WS_Stat' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, OnSelect) == 0x000318, "Member 'URecepiListItemBtn_C::OnSelect' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, ImagineRecpiData) == 0x000328, "Member 'URecepiListItemBtn_C::ImagineRecpiData' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, ImagineType) == 0x000360, "Member 'URecepiListItemBtn_C::ImagineType' has a wrong offset!");
static_assert(offsetof(URecepiListItemBtn_C, IsCrafted) == 0x000361, "Member 'URecepiListItemBtn_C::IsCrafted' has a wrong offset!");

}

