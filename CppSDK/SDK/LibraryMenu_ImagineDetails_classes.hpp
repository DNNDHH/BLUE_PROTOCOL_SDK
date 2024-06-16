#pragma once

 

// Package: LibraryMenu_ImagineDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C
// 0x0288 (0x0530 - 0x02A8)
class ULibraryMenu_ImagineDetails_C final : public USBLibraryMenuItemList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAttributeIcon_C*                       Attribute1_1;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_EnhanceImagine;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioCostume;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioMountImagine;                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioWeapon;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnGauge1_C*                           CmnGauge1;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DetailsGrp;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DetailTabButton;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           EXPGaugeSize;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_8;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_104;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Enhance;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_LibraryMenu_ImagineDetails_C;                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NS_BackGroundAura;                                 // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPictureBook_CraftRecipe_C*             PictureBook_CraftRecipe;                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon1;                                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon2;                                          // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon3;                                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon4;                                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon5;                                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            RecipeTabButton;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_DetailsType;                                // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_LibraryType;                                // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchImageType;                                   // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TabIconNew;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtArtsName;                                       // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtATK;                                            // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc;                                           // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc_1;                                         // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDEX;                                            // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtEffectValue;                                    // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtExp;                                            // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TxtExpGrp;                                         // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtExpTotal;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtHP;                                             // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtINT;                                            // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLvl;                                            // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMND;                                            // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSTR;                                            // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtType;                                           // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtVIT;                                            // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   UMG_CaptureStudio;                                 // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLineImage;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BattleImagineSkillInfoParts_C*     WBP_BattleImagineSkillInfoParts;                   // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            WindowOpenButton;                                  // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SelectTab;                                         // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AD7[0x4];                                     // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       SelectImagineData;                                 // 0x0450(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsDbg;                                             // 0x0500(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AD8[0x7];                                     // 0x0501(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRecipeTabRead;                                   // 0x0508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickZoomIn;                                     // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ELibraryImagineType                           ImagineType;                                       // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnRecipeTabRead__DelegateSignature();
	void OnClickZoomIn__DelegateSignature();
	void ExecuteUbergraph_LibraryMenu_ImagineDetails(int32 EntryPoint);
	void BndEvt__LibraryMenu_ImagineDetails_UMG_CaptureStudio_K2Node_ComponentBoundEvent_3_OnLoadAssetComplete__DelegateSignature();
	void BndEvt__LibraryMenu_ImagineDetails_Button_EnhanceImagine_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void SetEnhanceImage(int32 InImagineId);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void Construct();
	void BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void OnLoaded_9077E37640FA46939F1F1AB3BCBE4946(class UObject* Loaded);
	void SetDetailsVisibility(bool bVisible);
	void SetImagineData(const struct FSBMasterImagine& InImagineMasterData, ELibraryImagineType InImagineType);
	void SetActiveTab(int32 Param_Index);
	void UpdateReadRecipeTab();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_ImagineDetails_C">();
	}
	static class ULibraryMenu_ImagineDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_ImagineDetails_C>();
	}
};
static_assert(alignof(ULibraryMenu_ImagineDetails_C) == 0x000008, "Wrong alignment on ULibraryMenu_ImagineDetails_C");
static_assert(sizeof(ULibraryMenu_ImagineDetails_C) == 0x000530, "Wrong size on ULibraryMenu_ImagineDetails_C");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, UberGraphFrame) == 0x0002A8, "Member 'ULibraryMenu_ImagineDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, Attribute1_1) == 0x0002B0, "Member 'ULibraryMenu_ImagineDetails_C::Attribute1_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, Button_EnhanceImagine) == 0x0002B8, "Member 'ULibraryMenu_ImagineDetails_C::Button_EnhanceImagine' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, CaptureStudioCostume) == 0x0002C0, "Member 'ULibraryMenu_ImagineDetails_C::CaptureStudioCostume' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, CaptureStudioMountImagine) == 0x0002C8, "Member 'ULibraryMenu_ImagineDetails_C::CaptureStudioMountImagine' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, CaptureStudioWeapon) == 0x0002D0, "Member 'ULibraryMenu_ImagineDetails_C::CaptureStudioWeapon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, CmnGauge1) == 0x0002D8, "Member 'ULibraryMenu_ImagineDetails_C::CmnGauge1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, CmnImageThrobber) == 0x0002E0, "Member 'ULibraryMenu_ImagineDetails_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, CmnOperationRotate) == 0x0002E8, "Member 'ULibraryMenu_ImagineDetails_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, DetailsGrp) == 0x0002F0, "Member 'ULibraryMenu_ImagineDetails_C::DetailsGrp' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, DetailTabButton) == 0x0002F8, "Member 'ULibraryMenu_ImagineDetails_C::DetailTabButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, EXPGaugeSize) == 0x000300, "Member 'ULibraryMenu_ImagineDetails_C::EXPGaugeSize' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, Image) == 0x000308, "Member 'ULibraryMenu_ImagineDetails_C::Image' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, Image_2) == 0x000310, "Member 'ULibraryMenu_ImagineDetails_C::Image_2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, Image_3) == 0x000318, "Member 'ULibraryMenu_ImagineDetails_C::Image_3' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, Image_8) == 0x000320, "Member 'ULibraryMenu_ImagineDetails_C::Image_8' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, Image_104) == 0x000328, "Member 'ULibraryMenu_ImagineDetails_C::Image_104' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, Img_Enhance) == 0x000330, "Member 'ULibraryMenu_ImagineDetails_C::Img_Enhance' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, Name_LibraryMenu_ImagineDetails_C) == 0x000338, "Member 'ULibraryMenu_ImagineDetails_C::Name_LibraryMenu_ImagineDetails_C' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, NS_BackGroundAura) == 0x000340, "Member 'ULibraryMenu_ImagineDetails_C::NS_BackGroundAura' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, PictureBook_CraftRecipe) == 0x000348, "Member 'ULibraryMenu_ImagineDetails_C::PictureBook_CraftRecipe' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, PosIcon1) == 0x000350, "Member 'ULibraryMenu_ImagineDetails_C::PosIcon1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, PosIcon2) == 0x000358, "Member 'ULibraryMenu_ImagineDetails_C::PosIcon2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, PosIcon3) == 0x000360, "Member 'ULibraryMenu_ImagineDetails_C::PosIcon3' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, PosIcon4) == 0x000368, "Member 'ULibraryMenu_ImagineDetails_C::PosIcon4' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, PosIcon5) == 0x000370, "Member 'ULibraryMenu_ImagineDetails_C::PosIcon5' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, RecipeTabButton) == 0x000378, "Member 'ULibraryMenu_ImagineDetails_C::RecipeTabButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, Switch_DetailsType) == 0x000380, "Member 'ULibraryMenu_ImagineDetails_C::Switch_DetailsType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, Switch_LibraryType) == 0x000388, "Member 'ULibraryMenu_ImagineDetails_C::Switch_LibraryType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, SwitchImageType) == 0x000390, "Member 'ULibraryMenu_ImagineDetails_C::SwitchImageType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TabIconNew) == 0x000398, "Member 'ULibraryMenu_ImagineDetails_C::TabIconNew' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TextBlock) == 0x0003A0, "Member 'ULibraryMenu_ImagineDetails_C::TextBlock' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtArtsName) == 0x0003A8, "Member 'ULibraryMenu_ImagineDetails_C::TxtArtsName' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtATK) == 0x0003B0, "Member 'ULibraryMenu_ImagineDetails_C::TxtATK' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtDesc) == 0x0003B8, "Member 'ULibraryMenu_ImagineDetails_C::TxtDesc' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtDesc_1) == 0x0003C0, "Member 'ULibraryMenu_ImagineDetails_C::TxtDesc_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtDEX) == 0x0003C8, "Member 'ULibraryMenu_ImagineDetails_C::TxtDEX' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtEffectValue) == 0x0003D0, "Member 'ULibraryMenu_ImagineDetails_C::TxtEffectValue' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtExp) == 0x0003D8, "Member 'ULibraryMenu_ImagineDetails_C::TxtExp' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtExpGrp) == 0x0003E0, "Member 'ULibraryMenu_ImagineDetails_C::TxtExpGrp' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtExpTotal) == 0x0003E8, "Member 'ULibraryMenu_ImagineDetails_C::TxtExpTotal' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtHP) == 0x0003F0, "Member 'ULibraryMenu_ImagineDetails_C::TxtHP' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtINT) == 0x0003F8, "Member 'ULibraryMenu_ImagineDetails_C::TxtINT' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtLvl) == 0x000400, "Member 'ULibraryMenu_ImagineDetails_C::TxtLvl' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtMND) == 0x000408, "Member 'ULibraryMenu_ImagineDetails_C::TxtMND' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtSTR) == 0x000410, "Member 'ULibraryMenu_ImagineDetails_C::TxtSTR' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtType) == 0x000418, "Member 'ULibraryMenu_ImagineDetails_C::TxtType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, TxtVIT) == 0x000420, "Member 'ULibraryMenu_ImagineDetails_C::TxtVIT' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, UMG_CaptureStudio) == 0x000428, "Member 'ULibraryMenu_ImagineDetails_C::UMG_CaptureStudio' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, VLineImage) == 0x000430, "Member 'ULibraryMenu_ImagineDetails_C::VLineImage' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, WBP_BattleImagineSkillInfoParts) == 0x000438, "Member 'ULibraryMenu_ImagineDetails_C::WBP_BattleImagineSkillInfoParts' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, WindowOpenButton) == 0x000440, "Member 'ULibraryMenu_ImagineDetails_C::WindowOpenButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, SelectTab) == 0x000448, "Member 'ULibraryMenu_ImagineDetails_C::SelectTab' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, SelectImagineData) == 0x000450, "Member 'ULibraryMenu_ImagineDetails_C::SelectImagineData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, IsDbg) == 0x000500, "Member 'ULibraryMenu_ImagineDetails_C::IsDbg' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, OnRecipeTabRead) == 0x000508, "Member 'ULibraryMenu_ImagineDetails_C::OnRecipeTabRead' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, OnClickZoomIn) == 0x000518, "Member 'ULibraryMenu_ImagineDetails_C::OnClickZoomIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ImagineDetails_C, ImagineType) == 0x000528, "Member 'ULibraryMenu_ImagineDetails_C::ImagineType' has a wrong offset!");

}

