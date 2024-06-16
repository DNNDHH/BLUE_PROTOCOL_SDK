#pragma once

 

// Package: WBP_SkillTreeHorizon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillTreeHorizon.WBP_SkillTreeHorizon_C
// 0x0460 (0x06D8 - 0x0278)
class UWBP_SkillTreeHorizon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn_Datail;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 AbilityB_Icon_bg;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AbilityC_Icon_bg;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow01;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow01_1;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow01_2;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow02;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow02_1;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow02_2;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow02_3;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow02_4;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow02_5;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_4_01;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_4_02;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_5_01;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_5_02;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv0;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv0_1;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv0_2;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv0_3;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv1;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv1_1;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv1_2;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv2;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv2_1;                                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv2_2;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv3;                                          // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv3_1;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv3_2;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv3_3;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowLv3_4;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg01;                                              // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG02;                                              // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG03;                                              // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconL_C*                          ClassIcon;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Detail;                                            // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DetailBG01;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DetailBG02;                                        // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Normal;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        LevelArrow;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        LevelArrow_1;                                      // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        LevelArrow_2;                                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line01;                                            // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line01_01;                                         // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line02;                                            // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line03;                                            // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line03_1;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line03_2;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line03_01;                                         // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeMediaPlayerEmbedded_C*    Movie;                                             // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NoMovie;                                           // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NoSelect;                                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RightWidgetsAnker;                                 // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_130;                            // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_248;                            // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Alpha;                          // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Level;                          // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Name;                           // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Type;                           // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SW_AbilityIconBg;                                  // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBg;                                           // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBg_1;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBg_2;                                         // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBg_3;                                         // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Unlearned;                                         // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Unlearned_1;                                       // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Unlearned_2;                                       // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Unlearned_3;                                       // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillDescriptionBasics_C*          WBP_SkillDescriptionBasics;                        // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillHorizonBranchIcon_C*          WBP_SkillHorizonBranchIcon_1;                      // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillHorizonBranchIcon_C*          WBP_SkillHorizonBranchIcon_2;                      // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillHorizonBranchIcon_C*          WBP_SkillHorizonBranchIcon_3;                      // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillHorizonBranchIcon_C*          WBP_SkillHorizonBranchIcon_4_1;                    // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillHorizonBranchIcon_C*          WBP_SkillHorizonBranchIcon_4_2;                    // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillHorizonBranchIcon_C*          WBP_SkillHorizonBranchIcon_4_3;                    // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillHorizonBranchIcon_C*          WBP_SkillHorizonBranchIcon_4_4;                    // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillHorizonBranchIcon_C*          WBP_SkillHorizonBranchIcon_5_1;                    // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillHorizonBranchIcon_C*          WBP_SkillHorizonBranchIcon_5_2;                    // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillHorizonBranchIcon_C*          WBP_SkillHorizonBranchIcon_5_3;                    // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillHorizonBranchIcon_C*          WBP_SkillHorizonBranchIcon_5_4;                    // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillHorizonBranchIcon_C*          WBP_SkillHorizonBranchIcon_5_5;                    // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillHorizonBranchIcon_C*          WBP_SkillHorizonBranchIconOne;                     // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeBranchSwitcher_C*         WBP_SkillTreeBranchSwitcher_1;                     // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeBranchSwitcher_C*         WBP_SkillTreeBranchSwitcher_2;                     // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeBranchSwitcher_C*         WBP_SkillTreeBranchSwitcher_4_1;                   // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeBranchSwitcher_C*         WBP_SkillTreeBranchSwitcher_4_2;                   // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeBranchSwitcher_C*         WBP_SkillTreeBranchSwitcher_4_3;                   // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeBranchSwitcher_C*         WBP_SkillTreeBranchSwitcher_5_1;                   // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeBranchSwitcher_C*         WBP_SkillTreeBranchSwitcher_5_2;                   // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeBranchSwitcher_C*         WBP_SkillTreeBranchSwitcher_5_3;                   // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeBranchSwitcher_C*         WBP_SkillTreeBranchSwitcher_5_4;                   // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeHorizonLevelBG_C*         WBP_SkillTreeHorizonLevelBG;                       // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeHorizonLevelBG_C*         WBP_SkillTreeHorizonLevelBG_1;                     // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeHorizonLevelBG_C*         WBP_SkillTreeHorizonLevelBG_2;                     // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeHorizonLevelBG_C*         WBP_SkillTreeHorizonLevelBG_3;                     // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeHorizonLevelBG_C*         WBP_SkillTreeHorizonLevelBG_4_1;                   // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeHorizonLevelBG_C*         WBP_SkillTreeHorizonLevelBG_4_2;                   // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeHorizonLevelBG_C*         WBP_SkillTreeHorizonLevelBG_4_3;                   // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeHorizonLevelBG_C*         WBP_SkillTreeHorizonLevelBG_4_4;                   // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeHorizonLevelBG_C*         WBP_SkillTreeHorizonLevelBG_5_1;                   // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeHorizonLevelBG_C*         WBP_SkillTreeHorizonLevelBG_5_2;                   // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeHorizonLevelBG_C*         WBP_SkillTreeHorizonLevelBG_5_3;                   // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeHorizonLevelBG_C*         WBP_SkillTreeHorizonLevelBG_5_4;                   // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeHorizonLevelBG_C*         WBP_SkillTreeHorizonLevelBG_5_5;                   // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Image;                              // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_SkillTree;                          // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBMasterDataManager*                   DataMaster;                                        // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBSkillTreeHorizonBranchData>  SkillList;                                         // 0x0600(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CurrentLV;                                         // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxLv;                                             // 0x0614(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSkillDataMasterData                 Master;                                            // 0x0618(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWBP_SkillHorizonBranchIcon_C*>  SkillIconArrayG3;                                  // 0x0670(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_SkillHorizonBranchIcon_C*>  SkillIconArrayG4;                                  // 0x0680(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_SkillHorizonBranchIcon_C*>  SkillIconArrayG5;                                  // 0x0690(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_SkillTreeBranchSwitcher_C*> SkillBranchArrayG3;                                // 0x06A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_SkillTreeBranchSwitcher_C*> SkillBranchArrayG4;                                // 0x06B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_SkillTreeBranchSwitcher_C*> SkillBranchArrayG5;                                // 0x06C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         AnkerPoint;                                        // 0x06D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_SkillTreeHorizon(int32 EntryPoint);
	void BndEvt__WBP_SkillTreeHorizon_WBP_SkillHorizonBranchIcon_5_5_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillTreeHorizon_WBP_SkillHorizonBranchIcon_5_4_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillTreeHorizon_WBP_SkillHorizonBranchIcon_5_3_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillTreeHorizon_WBP_SkillHorizonBranchIcon_5_2_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillTreeHorizon_WBP_SkillHorizonBranchIcon_5_1_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void UpdateRightWidgetsAnker();
	void BndEvt__WBP_SkillTreeHorizon_WBP_SkillHorizonBranchIcon_4_4_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillTreeHorizon_WBP_SkillHorizonBranchIcon_4_3_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillTreeHorizon_WBP_SkillHorizonBranchIcon_4_2_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillTreeHorizon_WBP_SkillHorizonBranchIcon_4_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void IconSelectUpdate();
	void BndEvt__WBP_SkillTreeHorizon_WBP_SkillHorizonBranchIconOne_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void TreeVisibleOff();
	void SetSkillBrunch(int32 Param_Index, const struct FSBSkillTreeHorizonBranchData& SBSkillTreeHorizonBranchData, TArray<class UWBP_SkillTreeBranchSwitcher_C*>& InSkillBranchArray);
	void SetISkillcon(int32 Param_Index, const struct FSBSkillTreeHorizonBranchData& SBSkillTreeHorizonBranchData, TArray<class UWBP_SkillHorizonBranchIcon_C*>& InSkillIconArray);
	void SkillDetailsDisplay(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillTreeHorizon_WBP_SkillHorizonBranchIcon_177_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillTreeHorizon_WBP_SkillHorizonBranchIcon_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillTreeHorizon_WBP_SkillHorizonBranchIcon_79_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillTreeHorizon_CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void Close();
	void CustomEvent_0();
	void Init(const struct FSBSkillDataMasterData& Skill, ESBClassType ClassType);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_D391073141BB9F18836062A737A13918(class UObject* Loaded);
	void OnLoaded_1DFBD8004EBCEB458BED0A99B7EBFC67(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillTreeHorizon_C">();
	}
	static class UWBP_SkillTreeHorizon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillTreeHorizon_C>();
	}
};
static_assert(alignof(UWBP_SkillTreeHorizon_C) == 0x000008, "Wrong alignment on UWBP_SkillTreeHorizon_C");
static_assert(sizeof(UWBP_SkillTreeHorizon_C) == 0x0006D8, "Wrong size on UWBP_SkillTreeHorizon_C");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, UberGraphFrame) == 0x000278, "Member 'UWBP_SkillTreeHorizon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, AnimIn_Datail) == 0x000280, "Member 'UWBP_SkillTreeHorizon_C::AnimIn_Datail' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, AnimIn) == 0x000288, "Member 'UWBP_SkillTreeHorizon_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, AbilityB_Icon_bg) == 0x000290, "Member 'UWBP_SkillTreeHorizon_C::AbilityB_Icon_bg' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, AbilityC_Icon_bg) == 0x000298, "Member 'UWBP_SkillTreeHorizon_C::AbilityC_Icon_bg' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Arrow01) == 0x0002A0, "Member 'UWBP_SkillTreeHorizon_C::Arrow01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Arrow01_1) == 0x0002A8, "Member 'UWBP_SkillTreeHorizon_C::Arrow01_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Arrow01_2) == 0x0002B0, "Member 'UWBP_SkillTreeHorizon_C::Arrow01_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Arrow02) == 0x0002B8, "Member 'UWBP_SkillTreeHorizon_C::Arrow02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Arrow02_1) == 0x0002C0, "Member 'UWBP_SkillTreeHorizon_C::Arrow02_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Arrow02_2) == 0x0002C8, "Member 'UWBP_SkillTreeHorizon_C::Arrow02_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Arrow02_3) == 0x0002D0, "Member 'UWBP_SkillTreeHorizon_C::Arrow02_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Arrow02_4) == 0x0002D8, "Member 'UWBP_SkillTreeHorizon_C::Arrow02_4' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Arrow02_5) == 0x0002E0, "Member 'UWBP_SkillTreeHorizon_C::Arrow02_5' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Arrow_4_01) == 0x0002E8, "Member 'UWBP_SkillTreeHorizon_C::Arrow_4_01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Arrow_4_02) == 0x0002F0, "Member 'UWBP_SkillTreeHorizon_C::Arrow_4_02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Arrow_5_01) == 0x0002F8, "Member 'UWBP_SkillTreeHorizon_C::Arrow_5_01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Arrow_5_02) == 0x000300, "Member 'UWBP_SkillTreeHorizon_C::Arrow_5_02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv0) == 0x000308, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv0' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv0_1) == 0x000310, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv0_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv0_2) == 0x000318, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv0_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv0_3) == 0x000320, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv0_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv1) == 0x000328, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv1_1) == 0x000330, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv1_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv1_2) == 0x000338, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv1_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv2) == 0x000340, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv2_1) == 0x000348, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv2_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv2_2) == 0x000350, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv2_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv3) == 0x000358, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv3_1) == 0x000360, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv3_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv3_2) == 0x000368, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv3_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv3_3) == 0x000370, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv3_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ArrowLv3_4) == 0x000378, "Member 'UWBP_SkillTreeHorizon_C::ArrowLv3_4' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, BG) == 0x000380, "Member 'UWBP_SkillTreeHorizon_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Bg01) == 0x000388, "Member 'UWBP_SkillTreeHorizon_C::Bg01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, BG02) == 0x000390, "Member 'UWBP_SkillTreeHorizon_C::BG02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, BG03) == 0x000398, "Member 'UWBP_SkillTreeHorizon_C::BG03' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, ClassIcon) == 0x0003A0, "Member 'UWBP_SkillTreeHorizon_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, CmnBack01) == 0x0003A8, "Member 'UWBP_SkillTreeHorizon_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Detail) == 0x0003B0, "Member 'UWBP_SkillTreeHorizon_C::Detail' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, DetailBG01) == 0x0003B8, "Member 'UWBP_SkillTreeHorizon_C::DetailBG01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, DetailBG02) == 0x0003C0, "Member 'UWBP_SkillTreeHorizon_C::DetailBG02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Image_Icon) == 0x0003C8, "Member 'UWBP_SkillTreeHorizon_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Image_Normal) == 0x0003D0, "Member 'UWBP_SkillTreeHorizon_C::Image_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, LevelArrow) == 0x0003D8, "Member 'UWBP_SkillTreeHorizon_C::LevelArrow' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, LevelArrow_1) == 0x0003E0, "Member 'UWBP_SkillTreeHorizon_C::LevelArrow_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, LevelArrow_2) == 0x0003E8, "Member 'UWBP_SkillTreeHorizon_C::LevelArrow_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Line01) == 0x0003F0, "Member 'UWBP_SkillTreeHorizon_C::Line01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Line01_01) == 0x0003F8, "Member 'UWBP_SkillTreeHorizon_C::Line01_01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Line02) == 0x000400, "Member 'UWBP_SkillTreeHorizon_C::Line02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Line03) == 0x000408, "Member 'UWBP_SkillTreeHorizon_C::Line03' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Line03_1) == 0x000410, "Member 'UWBP_SkillTreeHorizon_C::Line03_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Line03_2) == 0x000418, "Member 'UWBP_SkillTreeHorizon_C::Line03_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Line03_01) == 0x000420, "Member 'UWBP_SkillTreeHorizon_C::Line03_01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Movie) == 0x000428, "Member 'UWBP_SkillTreeHorizon_C::Movie' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, NoMovie) == 0x000430, "Member 'UWBP_SkillTreeHorizon_C::NoMovie' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, NoSelect) == 0x000438, "Member 'UWBP_SkillTreeHorizon_C::NoSelect' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, RightWidgetsAnker) == 0x000440, "Member 'UWBP_SkillTreeHorizon_C::RightWidgetsAnker' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, SBRuntimeTextBlock_130) == 0x000448, "Member 'UWBP_SkillTreeHorizon_C::SBRuntimeTextBlock_130' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, SBRuntimeTextBlock_248) == 0x000450, "Member 'UWBP_SkillTreeHorizon_C::SBRuntimeTextBlock_248' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, SBRuntimeTextBlock_Alpha) == 0x000458, "Member 'UWBP_SkillTreeHorizon_C::SBRuntimeTextBlock_Alpha' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, SBRuntimeTextBlock_Level) == 0x000460, "Member 'UWBP_SkillTreeHorizon_C::SBRuntimeTextBlock_Level' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, SBRuntimeTextBlock_Name) == 0x000468, "Member 'UWBP_SkillTreeHorizon_C::SBRuntimeTextBlock_Name' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, SBRuntimeTextBlock_Type) == 0x000470, "Member 'UWBP_SkillTreeHorizon_C::SBRuntimeTextBlock_Type' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, SW_AbilityIconBg) == 0x000478, "Member 'UWBP_SkillTreeHorizon_C::SW_AbilityIconBg' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, TitleBg) == 0x000480, "Member 'UWBP_SkillTreeHorizon_C::TitleBg' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, TitleBg_1) == 0x000488, "Member 'UWBP_SkillTreeHorizon_C::TitleBg_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, TitleBg_2) == 0x000490, "Member 'UWBP_SkillTreeHorizon_C::TitleBg_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, TitleBg_3) == 0x000498, "Member 'UWBP_SkillTreeHorizon_C::TitleBg_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, UIBlocker) == 0x0004A0, "Member 'UWBP_SkillTreeHorizon_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Unlearned) == 0x0004A8, "Member 'UWBP_SkillTreeHorizon_C::Unlearned' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Unlearned_1) == 0x0004B0, "Member 'UWBP_SkillTreeHorizon_C::Unlearned_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Unlearned_2) == 0x0004B8, "Member 'UWBP_SkillTreeHorizon_C::Unlearned_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Unlearned_3) == 0x0004C0, "Member 'UWBP_SkillTreeHorizon_C::Unlearned_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillDescriptionBasics) == 0x0004C8, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillDescriptionBasics' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillHorizonBranchIcon_1) == 0x0004D0, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillHorizonBranchIcon_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillHorizonBranchIcon_2) == 0x0004D8, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillHorizonBranchIcon_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillHorizonBranchIcon_3) == 0x0004E0, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillHorizonBranchIcon_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillHorizonBranchIcon_4_1) == 0x0004E8, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillHorizonBranchIcon_4_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillHorizonBranchIcon_4_2) == 0x0004F0, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillHorizonBranchIcon_4_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillHorizonBranchIcon_4_3) == 0x0004F8, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillHorizonBranchIcon_4_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillHorizonBranchIcon_4_4) == 0x000500, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillHorizonBranchIcon_4_4' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillHorizonBranchIcon_5_1) == 0x000508, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillHorizonBranchIcon_5_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillHorizonBranchIcon_5_2) == 0x000510, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillHorizonBranchIcon_5_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillHorizonBranchIcon_5_3) == 0x000518, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillHorizonBranchIcon_5_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillHorizonBranchIcon_5_4) == 0x000520, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillHorizonBranchIcon_5_4' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillHorizonBranchIcon_5_5) == 0x000528, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillHorizonBranchIcon_5_5' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillHorizonBranchIconOne) == 0x000530, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillHorizonBranchIconOne' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeBranchSwitcher_1) == 0x000538, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeBranchSwitcher_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeBranchSwitcher_2) == 0x000540, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeBranchSwitcher_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeBranchSwitcher_4_1) == 0x000548, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeBranchSwitcher_4_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeBranchSwitcher_4_2) == 0x000550, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeBranchSwitcher_4_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeBranchSwitcher_4_3) == 0x000558, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeBranchSwitcher_4_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeBranchSwitcher_5_1) == 0x000560, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeBranchSwitcher_5_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeBranchSwitcher_5_2) == 0x000568, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeBranchSwitcher_5_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeBranchSwitcher_5_3) == 0x000570, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeBranchSwitcher_5_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeBranchSwitcher_5_4) == 0x000578, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeBranchSwitcher_5_4' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeHorizonLevelBG) == 0x000580, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeHorizonLevelBG' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeHorizonLevelBG_1) == 0x000588, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeHorizonLevelBG_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeHorizonLevelBG_2) == 0x000590, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeHorizonLevelBG_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeHorizonLevelBG_3) == 0x000598, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeHorizonLevelBG_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeHorizonLevelBG_4_1) == 0x0005A0, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeHorizonLevelBG_4_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeHorizonLevelBG_4_2) == 0x0005A8, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeHorizonLevelBG_4_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeHorizonLevelBG_4_3) == 0x0005B0, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeHorizonLevelBG_4_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeHorizonLevelBG_4_4) == 0x0005B8, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeHorizonLevelBG_4_4' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeHorizonLevelBG_5_1) == 0x0005C0, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeHorizonLevelBG_5_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeHorizonLevelBG_5_2) == 0x0005C8, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeHorizonLevelBG_5_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeHorizonLevelBG_5_3) == 0x0005D0, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeHorizonLevelBG_5_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeHorizonLevelBG_5_4) == 0x0005D8, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeHorizonLevelBG_5_4' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WBP_SkillTreeHorizonLevelBG_5_5) == 0x0005E0, "Member 'UWBP_SkillTreeHorizon_C::WBP_SkillTreeHorizonLevelBG_5_5' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WidgetSwitcher_Image) == 0x0005E8, "Member 'UWBP_SkillTreeHorizon_C::WidgetSwitcher_Image' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, WidgetSwitcher_SkillTree) == 0x0005F0, "Member 'UWBP_SkillTreeHorizon_C::WidgetSwitcher_SkillTree' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, DataMaster) == 0x0005F8, "Member 'UWBP_SkillTreeHorizon_C::DataMaster' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, SkillList) == 0x000600, "Member 'UWBP_SkillTreeHorizon_C::SkillList' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, CurrentLV) == 0x000610, "Member 'UWBP_SkillTreeHorizon_C::CurrentLV' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, MaxLv) == 0x000614, "Member 'UWBP_SkillTreeHorizon_C::MaxLv' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, Master) == 0x000618, "Member 'UWBP_SkillTreeHorizon_C::Master' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, SkillIconArrayG3) == 0x000670, "Member 'UWBP_SkillTreeHorizon_C::SkillIconArrayG3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, SkillIconArrayG4) == 0x000680, "Member 'UWBP_SkillTreeHorizon_C::SkillIconArrayG4' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, SkillIconArrayG5) == 0x000690, "Member 'UWBP_SkillTreeHorizon_C::SkillIconArrayG5' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, SkillBranchArrayG3) == 0x0006A0, "Member 'UWBP_SkillTreeHorizon_C::SkillBranchArrayG3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, SkillBranchArrayG4) == 0x0006B0, "Member 'UWBP_SkillTreeHorizon_C::SkillBranchArrayG4' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, SkillBranchArrayG5) == 0x0006C0, "Member 'UWBP_SkillTreeHorizon_C::SkillBranchArrayG5' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizon_C, AnkerPoint) == 0x0006D0, "Member 'UWBP_SkillTreeHorizon_C::AnkerPoint' has a wrong offset!");

}

