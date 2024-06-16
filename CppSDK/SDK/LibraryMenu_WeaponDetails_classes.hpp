#pragma once

 

// Package: LibraryMenu_WeaponDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C
// 0x01C8 (0x0470 - 0x02A8)
class ULibraryMenu_WeaponDetails_C final : public USBLibraryMenuItemList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimDetailsIn;                                     // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAttributeIcon_C*                       Attribute1;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DetailsGrp;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DetailTabButton;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Weapon;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_LibraryMenu_WeaponDetails_C;                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPictureBook_CraftRecipe_C*             PictureBook_CraftRecipe;                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            RecipeTabButton;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_LibraryType;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TabIconNew;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAttack;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAttribute;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCp;                                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc_1;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDEX;                                            // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtINT;                                            // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLv;                                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLvMax;                                          // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMND;                                            // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSTR;                                            // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtVIT;                                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLineImage;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            WindowOpenButton;                                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SelectTab;                                         // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F4F[0x4];                                     // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    SelectWeaponData;                                  // 0x0390(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsDbg;                                             // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F50[0x7];                                     // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRecipeTabRead;                                   // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_WeaponForCapture_Studio_C*          WeaponModelStudio;                                 // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickZoomIn;                                     // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnRecipeTabRead__DelegateSignature();
	void OnClickZoomIn__DelegateSignature();
	void ExecuteUbergraph_LibraryMenu_WeaponDetails(int32 EntryPoint);
	void OnWeaponLoaded_Event();
	void BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void Construct();
	void BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void SetDetailsVisibility(bool bVisible);
	void SetWeaponData(const struct FSBWeaponMasterData& InWeaponMasterData);
	void SetActiveTab(int32 Param_Index);
	void UpdateReadRecipeTab();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_WeaponDetails_C">();
	}
	static class ULibraryMenu_WeaponDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_WeaponDetails_C>();
	}
};
static_assert(alignof(ULibraryMenu_WeaponDetails_C) == 0x000008, "Wrong alignment on ULibraryMenu_WeaponDetails_C");
static_assert(sizeof(ULibraryMenu_WeaponDetails_C) == 0x000470, "Wrong size on ULibraryMenu_WeaponDetails_C");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, UberGraphFrame) == 0x0002A8, "Member 'ULibraryMenu_WeaponDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, AnimDetailsIn) == 0x0002B0, "Member 'ULibraryMenu_WeaponDetails_C::AnimDetailsIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, Attribute1) == 0x0002B8, "Member 'ULibraryMenu_WeaponDetails_C::Attribute1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, CmnImageThrobber) == 0x0002C0, "Member 'ULibraryMenu_WeaponDetails_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, CmnOperationRotate) == 0x0002C8, "Member 'ULibraryMenu_WeaponDetails_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, DetailsGrp) == 0x0002D0, "Member 'ULibraryMenu_WeaponDetails_C::DetailsGrp' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, DetailTabButton) == 0x0002D8, "Member 'ULibraryMenu_WeaponDetails_C::DetailTabButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, Img_Weapon) == 0x0002E0, "Member 'ULibraryMenu_WeaponDetails_C::Img_Weapon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, Name_LibraryMenu_WeaponDetails_C) == 0x0002E8, "Member 'ULibraryMenu_WeaponDetails_C::Name_LibraryMenu_WeaponDetails_C' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, PictureBook_CraftRecipe) == 0x0002F0, "Member 'ULibraryMenu_WeaponDetails_C::PictureBook_CraftRecipe' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, RecipeTabButton) == 0x0002F8, "Member 'ULibraryMenu_WeaponDetails_C::RecipeTabButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, Switch_LibraryType) == 0x000300, "Member 'ULibraryMenu_WeaponDetails_C::Switch_LibraryType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, TabIconNew) == 0x000308, "Member 'ULibraryMenu_WeaponDetails_C::TabIconNew' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, TextBlock_1) == 0x000310, "Member 'ULibraryMenu_WeaponDetails_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, TxtAttack) == 0x000318, "Member 'ULibraryMenu_WeaponDetails_C::TxtAttack' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, TxtAttribute) == 0x000320, "Member 'ULibraryMenu_WeaponDetails_C::TxtAttribute' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, TxtCp) == 0x000328, "Member 'ULibraryMenu_WeaponDetails_C::TxtCp' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, TxtDesc) == 0x000330, "Member 'ULibraryMenu_WeaponDetails_C::TxtDesc' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, TxtDesc_1) == 0x000338, "Member 'ULibraryMenu_WeaponDetails_C::TxtDesc_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, TxtDEX) == 0x000340, "Member 'ULibraryMenu_WeaponDetails_C::TxtDEX' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, TxtINT) == 0x000348, "Member 'ULibraryMenu_WeaponDetails_C::TxtINT' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, TxtLv) == 0x000350, "Member 'ULibraryMenu_WeaponDetails_C::TxtLv' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, TxtLvMax) == 0x000358, "Member 'ULibraryMenu_WeaponDetails_C::TxtLvMax' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, TxtMND) == 0x000360, "Member 'ULibraryMenu_WeaponDetails_C::TxtMND' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, TxtSTR) == 0x000368, "Member 'ULibraryMenu_WeaponDetails_C::TxtSTR' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, TxtVIT) == 0x000370, "Member 'ULibraryMenu_WeaponDetails_C::TxtVIT' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, VLineImage) == 0x000378, "Member 'ULibraryMenu_WeaponDetails_C::VLineImage' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, WindowOpenButton) == 0x000380, "Member 'ULibraryMenu_WeaponDetails_C::WindowOpenButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, SelectTab) == 0x000388, "Member 'ULibraryMenu_WeaponDetails_C::SelectTab' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, SelectWeaponData) == 0x000390, "Member 'ULibraryMenu_WeaponDetails_C::SelectWeaponData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, IsDbg) == 0x000440, "Member 'ULibraryMenu_WeaponDetails_C::IsDbg' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, OnRecipeTabRead) == 0x000448, "Member 'ULibraryMenu_WeaponDetails_C::OnRecipeTabRead' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, WeaponModelStudio) == 0x000458, "Member 'ULibraryMenu_WeaponDetails_C::WeaponModelStudio' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_WeaponDetails_C, OnClickZoomIn) == 0x000460, "Member 'ULibraryMenu_WeaponDetails_C::OnClickZoomIn' has a wrong offset!");

}

