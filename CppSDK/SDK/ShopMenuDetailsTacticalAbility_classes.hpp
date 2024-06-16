#pragma once

 

// Package: ShopMenuDetailsTacticalAbility

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C
// 0x0160 (0x0410 - 0x02B0)
class UShopMenuDetailsTacticalAbility_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgDetails;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BuffIconGrp;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp1;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp2;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DescGrp_1;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_Fuff;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_3;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTitleBG;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsNameParts_C*        NameParts;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RecastTimeGrp;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_14;                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextDesc;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtRecast_1;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsTags_C*             WBP_ShopMenuDetailsTags;                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        WPB_BuffIcon_1;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        WPB_BuffIcon_2;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        WPB_BuffIcon_3;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        WPB_BuffIcon_4;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        WPB_BuffIcon_5;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        WPB_BuffIcon_6;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         InDesignType;                                      // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_540C[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndCloseDetailAnimation;                         // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SkillId;                                           // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_540D[0x4];                                     // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickZoomIn;                                     // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SkillLV;                                           // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_540E[0x4];                                     // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 SkillData;                                         // 0x03A8(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           BuffIconList;                                      // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget);
	void OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
	void ExecuteUbergraph_ShopMenuDetailsTacticalAbility(int32 EntryPoint);
	void SetData(int32 Param_SkillId);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void CloseDetails();
	void ShowDetails();
	void Construct();
	void BuffIconsCollapsed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenuDetailsTacticalAbility_C">();
	}
	static class UShopMenuDetailsTacticalAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenuDetailsTacticalAbility_C>();
	}
};
static_assert(alignof(UShopMenuDetailsTacticalAbility_C) == 0x000008, "Wrong alignment on UShopMenuDetailsTacticalAbility_C");
static_assert(sizeof(UShopMenuDetailsTacticalAbility_C) == 0x000410, "Wrong size on UShopMenuDetailsTacticalAbility_C");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, UberGraphFrame) == 0x0002B0, "Member 'UShopMenuDetailsTacticalAbility_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, AnimOut) == 0x0002B8, "Member 'UShopMenuDetailsTacticalAbility_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, AnimIn) == 0x0002C0, "Member 'UShopMenuDetailsTacticalAbility_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, BgDetails) == 0x0002C8, "Member 'UShopMenuDetailsTacticalAbility_C::BgDetails' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, BuffIconGrp) == 0x0002D0, "Member 'UShopMenuDetailsTacticalAbility_C::BuffIconGrp' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, ColorGrp1) == 0x0002D8, "Member 'UShopMenuDetailsTacticalAbility_C::ColorGrp1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, ColorGrp2) == 0x0002E0, "Member 'UShopMenuDetailsTacticalAbility_C::ColorGrp2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, DescGrp_1) == 0x0002E8, "Member 'UShopMenuDetailsTacticalAbility_C::DescGrp_1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, GridPanel_Fuff) == 0x0002F0, "Member 'UShopMenuDetailsTacticalAbility_C::GridPanel_Fuff' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, HorizontalBox_3) == 0x0002F8, "Member 'UShopMenuDetailsTacticalAbility_C::HorizontalBox_3' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, Image_Icon) == 0x000300, "Member 'UShopMenuDetailsTacticalAbility_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, ImageTitleBG) == 0x000308, "Member 'UShopMenuDetailsTacticalAbility_C::ImageTitleBG' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, NameParts) == 0x000310, "Member 'UShopMenuDetailsTacticalAbility_C::NameParts' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, RecastTimeGrp) == 0x000318, "Member 'UShopMenuDetailsTacticalAbility_C::RecastTimeGrp' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, SBRuntimeTextBlock_14) == 0x000320, "Member 'UShopMenuDetailsTacticalAbility_C::SBRuntimeTextBlock_14' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, TextDesc) == 0x000328, "Member 'UShopMenuDetailsTacticalAbility_C::TextDesc' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, TxtRecast_1) == 0x000330, "Member 'UShopMenuDetailsTacticalAbility_C::TxtRecast_1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, WBP_ShopMenuDetailsTags) == 0x000338, "Member 'UShopMenuDetailsTacticalAbility_C::WBP_ShopMenuDetailsTags' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, WPB_BuffIcon_1) == 0x000340, "Member 'UShopMenuDetailsTacticalAbility_C::WPB_BuffIcon_1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, WPB_BuffIcon_2) == 0x000348, "Member 'UShopMenuDetailsTacticalAbility_C::WPB_BuffIcon_2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, WPB_BuffIcon_3) == 0x000350, "Member 'UShopMenuDetailsTacticalAbility_C::WPB_BuffIcon_3' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, WPB_BuffIcon_4) == 0x000358, "Member 'UShopMenuDetailsTacticalAbility_C::WPB_BuffIcon_4' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, WPB_BuffIcon_5) == 0x000360, "Member 'UShopMenuDetailsTacticalAbility_C::WPB_BuffIcon_5' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, WPB_BuffIcon_6) == 0x000368, "Member 'UShopMenuDetailsTacticalAbility_C::WPB_BuffIcon_6' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, InDesignType) == 0x000370, "Member 'UShopMenuDetailsTacticalAbility_C::InDesignType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, OnEndCloseDetailAnimation) == 0x000378, "Member 'UShopMenuDetailsTacticalAbility_C::OnEndCloseDetailAnimation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, SkillId) == 0x000388, "Member 'UShopMenuDetailsTacticalAbility_C::SkillId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, OnClickZoomIn) == 0x000390, "Member 'UShopMenuDetailsTacticalAbility_C::OnClickZoomIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, SkillLV) == 0x0003A0, "Member 'UShopMenuDetailsTacticalAbility_C::SkillLV' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, SkillData) == 0x0003A8, "Member 'UShopMenuDetailsTacticalAbility_C::SkillData' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsTacticalAbility_C, BuffIconList) == 0x000400, "Member 'UShopMenuDetailsTacticalAbility_C::BuffIconList' has a wrong offset!");

}

