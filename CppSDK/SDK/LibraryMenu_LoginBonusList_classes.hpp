#pragma once

 

// Package: LibraryMenu_LoginBonusList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C
// 0x00E0 (0x03D8 - 0x02F8)
class ULibraryMenu_LoginBonusList_C final : public USBLoginBonusWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLoginBonusListIn;                              // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                             BannerBox;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            LeftArrow;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        LeftArrowSwitcher;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonus_BannerImage_C*  LibraryMenu_LoginBonus_BannerImage;                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonus_BannerImage_C*  LibraryMenu_LoginBonus_BannerImage_1;              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonus_BannerImage_C*  LibraryMenu_LoginBonus_BannerImage_2;              // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_2;                                            // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            RightArrow;                                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        RightArrowSwitcher;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                SpacerLeft;                                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                SpacerRight;                                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LoginBonusList_C*                  UMG_LoginBonusList;                                // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsInitialize;                                      // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E34[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnListInitComplete;                                // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ListItemClick;                                     // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class ULibraryMenu_LoginBonusListLine_C*> LineWidget;                                        // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ULibraryMenu_LoginBonus_BannerImage_C*> BannerDataList;                                    // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         BannerViewIndex;                                   // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E35[0x4];                                     // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             BannerClick;                                       // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ULibraryMenu_LoginBonus_BannerImage_C*  LastSelectedBunner;                                // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnListInitComplete__DelegateSignature();
	void ListItemClick__DelegateSignature(int32 Param_Index);
	void BannerClick__DelegateSignature(int32 ID);
	void ExecuteUbergraph_LibraryMenu_LoginBonusList(int32 EntryPoint);
	void OnBannerClicked(int32 ID, class ULibraryMenu_LoginBonus_BannerImage_C* SelectedBtn);
	void BndEvt__LibraryMenu_LoginBonusList_RightArrow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LibraryMenu_LoginBonusList_LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnListItemClick(int32 Param_Index);
	void Construct();
	void OnImageLoadComplete(bool Enable);
	void Finish();
	void Initialize();
	void SetData(const struct FSBLoginBonusWindowData& DataList, bool MouseClick);
	void SetupMouseClickEvent();
	void SetBannerImage(int32 Param_Index, class UTexture2DDynamic* TextureData);
	void SetBannerData(TArray<struct FSBLoginBonusWindowData>& DataList);
	void SetBannerViewIndex(int32 ViewIndex);
	void SetBannerTexture(int32 Param_Index, class UTexture2D* Texture);
	void UpdateBannerViewIndex();
	void Play_Anim_Login_Bonus_List_In();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_LoginBonusList_C">();
	}
	static class ULibraryMenu_LoginBonusList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_LoginBonusList_C>();
	}
};
static_assert(alignof(ULibraryMenu_LoginBonusList_C) == 0x000008, "Wrong alignment on ULibraryMenu_LoginBonusList_C");
static_assert(sizeof(ULibraryMenu_LoginBonusList_C) == 0x0003D8, "Wrong size on ULibraryMenu_LoginBonusList_C");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, UberGraphFrame) == 0x0002F8, "Member 'ULibraryMenu_LoginBonusList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, AnimLoginBonusListIn) == 0x000300, "Member 'ULibraryMenu_LoginBonusList_C::AnimLoginBonusListIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, BannerBox) == 0x000308, "Member 'ULibraryMenu_LoginBonusList_C::BannerBox' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, LeftArrow) == 0x000310, "Member 'ULibraryMenu_LoginBonusList_C::LeftArrow' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, LeftArrowSwitcher) == 0x000318, "Member 'ULibraryMenu_LoginBonusList_C::LeftArrowSwitcher' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, LibraryMenu_LoginBonus_BannerImage) == 0x000320, "Member 'ULibraryMenu_LoginBonusList_C::LibraryMenu_LoginBonus_BannerImage' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, LibraryMenu_LoginBonus_BannerImage_1) == 0x000328, "Member 'ULibraryMenu_LoginBonusList_C::LibraryMenu_LoginBonus_BannerImage_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, LibraryMenu_LoginBonus_BannerImage_2) == 0x000330, "Member 'ULibraryMenu_LoginBonusList_C::LibraryMenu_LoginBonus_BannerImage_2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, Line) == 0x000338, "Member 'ULibraryMenu_LoginBonusList_C::Line' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, Line_2) == 0x000340, "Member 'ULibraryMenu_LoginBonusList_C::Line_2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, RightArrow) == 0x000348, "Member 'ULibraryMenu_LoginBonusList_C::RightArrow' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, RightArrowSwitcher) == 0x000350, "Member 'ULibraryMenu_LoginBonusList_C::RightArrowSwitcher' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, SpacerLeft) == 0x000358, "Member 'ULibraryMenu_LoginBonusList_C::SpacerLeft' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, SpacerRight) == 0x000360, "Member 'ULibraryMenu_LoginBonusList_C::SpacerRight' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, UMG_LoginBonusList) == 0x000368, "Member 'ULibraryMenu_LoginBonusList_C::UMG_LoginBonusList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, IsInitialize) == 0x000370, "Member 'ULibraryMenu_LoginBonusList_C::IsInitialize' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, OnListInitComplete) == 0x000378, "Member 'ULibraryMenu_LoginBonusList_C::OnListInitComplete' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, ListItemClick) == 0x000388, "Member 'ULibraryMenu_LoginBonusList_C::ListItemClick' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, LineWidget) == 0x000398, "Member 'ULibraryMenu_LoginBonusList_C::LineWidget' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, BannerDataList) == 0x0003A8, "Member 'ULibraryMenu_LoginBonusList_C::BannerDataList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, BannerViewIndex) == 0x0003B8, "Member 'ULibraryMenu_LoginBonusList_C::BannerViewIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, BannerClick) == 0x0003C0, "Member 'ULibraryMenu_LoginBonusList_C::BannerClick' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusList_C, LastSelectedBunner) == 0x0003D0, "Member 'ULibraryMenu_LoginBonusList_C::LastSelectedBunner' has a wrong offset!");

}

