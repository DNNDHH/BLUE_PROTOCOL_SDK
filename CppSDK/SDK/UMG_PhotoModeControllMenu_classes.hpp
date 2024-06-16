#pragma once

 

// Package: UMG_PhotoModeControllMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "EPhotoModeUploadList_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C
// 0x0320 (0x0598 - 0x0278)
class UUMG_PhotoModeControllMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OutCameraControlView;                              // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OutPlayerControlView;                              // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InAnim;                                            // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Root;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_CameraControlMode;                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_CameraControlView;                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_PlayerControlMode;                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_PlayerControlView;                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_UploadWindow;                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControllCheckBox_C*       CheckBox_EnableDOF;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControllCheckBox_C*       CheckBox_FocusToPlayer;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                DropHitBG;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBSelectableTextButtonCmnBtn27_C*      SBButton_LookAtPlayerOff;                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBSelectableTextButtonCmnBtn27_C*      SBButton_LookAtPlayerOn;                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButton_C*                        SBButton_ResetCamera;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnBtn27_C*                SBButton_ResetDOF;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnBtn27_C*                SBButton_ResetFov;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnBtn27_C*                SBButton_ResetRotation;                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBSelectableTextButton_C*              SBButton_TabGesture;                               // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_TabLeft;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_TabLeft_1;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBSelectableTextButton_C*              SBButton_TabLookAt;                                // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_TabRight;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_TabRight_1;                               // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBSelectableTextButton_C*              SBButton_TabRotation;                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBSelectableTextButton_C*              SBButton_TabSkill;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBSelectableTextButton_C*              SBButton_TabZoom;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButton_C*                        SBButton_TalkMode;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          SBCheckBox_ApertureTest;                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             SBCheckBoxCmnCheckBox01_DebugOverideTime;          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButton_C*                        SBTextButton_ToggleCameraControlView;              // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButton_C*                        SBTextButton_TogglePlayerControlView;              // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowTutorialHelpBtn_C*                 ShowTutorialHelpBtn;                               // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Gesture;                                   // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_LookAt;                                    // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Rotation;                                  // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Skill;                                     // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_SkillTabButton;                            // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Zoom;                                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControllSlider_C*         Slider_Aperture;                                   // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControllSlider_C*         Slider_DebugOverrideTime;                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControllSlider_C*         Slider_FocalDistance;                              // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControllSlider_C*         Slider_FOV;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControllSliderShort_C*    Slider_MaxBackgroundRadius;                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControllSliderShort_C*    Slider_MaxForegroundRadius;                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControllSlider_C*         Slider_RotationPitch;                              // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControllSlider_C*         Slider_RotationRoll;                               // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControllSlider_C*         Slider_RotationYaw;                                // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ToggleCameraControlViewKey;                   // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_TogglePlayerControlViewKey;                   // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_CameraControlViewTitle;                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_ControlMode;                             // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_KeyGuideCameraMove;                      // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_KeyGuideCameraRot;                       // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_KeyGuideScreenshot;                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_KeyGuideToggleUiVisible;                 // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_PlayerControlViewTitle;                  // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_SwitchControlMode;                       // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_TalkModeButton;                          // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoMode_UploadWindowMenu_C*      UMG_PhotoMode_UploadWindowMenu;                    // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControll_UploadList_C*    UMG_PhotoModeControll_UploadList;                  // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControlMenuSkillList_C*   UMG_PhotoModeControlMenuSkillList;                 // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeEmotionView_C*            UMG_PhotoModeEmotionView;                          // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModePlayerControlViewHeader_C* UMG_PhotoModePlayerControlViewHeader;              // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModePlayerListMain_C*         UMG_PhotoModePlayerListMain;                       // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_CameraControlView;                     // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_PlayerControlView;                     // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_CameraControlView;                  // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_PlayerControlView;                  // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bDesignCheck;                                      // 0x04B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94EA[0x3];                                     // 0x04B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DebugDisplayTabIndex;                              // 0x04B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayerControlMode;                                // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bTalkMode;                                         // 0x04B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsMouseButtonDownAtDragHitBg;                     // 0x04BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94EB[0x5];                                     // 0x04BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SBPhotoModeController_C*            PhotoModeController;                               // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultFOV;                                        // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowGestureTab;                                   // 0x04CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94EC[0x3];                                     // 0x04CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CameraControlViewTabArray;                         // 0x04D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USBSelectableTextButton_C*>      CameraControlViewTabButtonArray;                   // 0x04E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class FName>                           CameraControlViewTabTitleTextIdArray;              // 0x04F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWidget*>                        PlayerControlViewTabArray;                         // 0x0500(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USBSelectableTextButton_C*>      PlayerControlViewTabButtonArray;                   // 0x0510(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class FName>                           PlayerControlViewTabTitleTextIdArray;              // 0x0520(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBPhotoModePlayerControlData*          WorkData;                                          // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowCameraControlView;                            // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShowPlayerControlView;                            // 0x0539(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94ED[0x6];                                     // 0x053A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         UploadThumbnailImages;                             // 0x0540(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          bIsUploadFinish;                                   // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94EE[0x3];                                     // 0x0551(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              UploadPhotodataMargin_1;                           // 0x0554(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94EF[0x4];                                     // 0x055C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector2D>                      UploadPhotodataMargin_2;                           // 0x0560(0x0010)(Edit, BlueprintVisible)
	TArray<struct FVector2D>                      UploadPhotodataMargin_3;                           // 0x0570(0x0010)(Edit, BlueprintVisible)
	class USBPhotoModeImageComponent*             PhotoModeImageComponent;                           // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableDOF;                                        // 0x0588(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bFocusToPlayer;                                    // 0x0589(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94F0[0x6];                                     // 0x058A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                TabButtonToolTip;                                  // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_PhotoModeControllMenu(int32 EntryPoint);
	void UpdateSkillList();
	void RefreshPlayerControlData();
	void TogglePlayerControlView();
	void ToggleCameraControlView();
	void UpdateDesign();
	void OnChangeVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void OnScreenShotCapturedEvent();
	void Destruct();
	void SetTalkMode(bool Param_bTalkMode);
	void Construct();
	void SetControlMode(bool Param_bPlayerControlMode);
	void PreConstruct(bool IsDesignTime);
	void SetPhotoModeContoller(class ABP_SBPhotoModeController_C* PMC);
	void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature(bool bCloseEyes);
	void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature(ESBLipSyncType LipSyncType);
	void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature(float Value);
	void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature(float Value);
	void BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature(float Value);
	void UpdateDofUi();
	void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature(bool bIsChecked);
	void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature(ESBFacialType FacialType);
	void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature(class FName EmotionId);
	void BndEvt__UMG_PhotoModeControllMenu_SBTextButton_TogglePlayerControlView_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void SetActivePlayerControlViewWidget(class UWidget* Widget);
	void BndEvt__UMG_PhotoModeControllMenu_SBTextButton_Ctrl_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void SetRotation(const struct FRotator& Value);
	void SetFOV(float Value);
	void SetFocalDistance(float Value);
	void BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__SBButton_ResetCamera_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_TalkMode_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void SetLookAtPlayer(bool bLookAtPlayer);
	void BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__SBButton_ResetCamera_2_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender);
	void BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender);
	void BndEvt__Button_TabRight_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_TabLeft_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_22_EventClicked__DelegateSignature();
	void SetActiveCameraControlViewWidget(class UWidget* Widget);
	void BndEvt__Button_Tab3_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Tab4_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Tab5_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_ResetRotation_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Tab2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__Button_LookAtPlayerOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_LookAtPlayerOn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Tab1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_ResetTab1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeControll_UploadList_K2Node_ComponentBoundEvent_5_UploadSelectWindowClickEvent__DelegateSignature();
	void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_4_WindowUploadFaildFinishedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_3_WindowUploadStartEvent__DelegateSignature();
	void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_0_WindowUploadFinishedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_1_WindowCloseFinishedEvent__DelegateSignature();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	struct FEventReply On_DropHitBG_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool IsKeyboardMode();
	void InitKeyGuidText();
	void SetRootVisible(bool bVisible);
	bool IsGamepadMode();
	void Create_Tool_Tip(class FName TextId, class UWidget** Param_TabButtonToolTip);
	class UWidget* Get_SBButton_TabRotation_ToolTipWidget_0();
	class UWidget* Get_SBButton_TabZoom_ToolTipWidget_0();
	class UWidget* Get_SBButton_TabLookAt_ToolTipWidget_0();
	class UWidget* Get_SBButton_TabGesture_ToolTipWidget_0();
	class UWidget* Get_SBButton_TabSkill_ToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PhotoModeControllMenu_C">();
	}
	static class UUMG_PhotoModeControllMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PhotoModeControllMenu_C>();
	}
};
static_assert(alignof(UUMG_PhotoModeControllMenu_C) == 0x000008, "Wrong alignment on UUMG_PhotoModeControllMenu_C");
static_assert(sizeof(UUMG_PhotoModeControllMenu_C) == 0x000598, "Wrong size on UUMG_PhotoModeControllMenu_C");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, UberGraphFrame) == 0x000278, "Member 'UUMG_PhotoModeControllMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, OutCameraControlView) == 0x000280, "Member 'UUMG_PhotoModeControllMenu_C::OutCameraControlView' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, OutPlayerControlView) == 0x000288, "Member 'UUMG_PhotoModeControllMenu_C::OutPlayerControlView' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, InAnim) == 0x000290, "Member 'UUMG_PhotoModeControllMenu_C::InAnim' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, Border_Root) == 0x000298, "Member 'UUMG_PhotoModeControllMenu_C::Border_Root' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, CanvasPanel_CameraControlMode) == 0x0002A0, "Member 'UUMG_PhotoModeControllMenu_C::CanvasPanel_CameraControlMode' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, CanvasPanel_CameraControlView) == 0x0002A8, "Member 'UUMG_PhotoModeControllMenu_C::CanvasPanel_CameraControlView' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, CanvasPanel_PlayerControlMode) == 0x0002B0, "Member 'UUMG_PhotoModeControllMenu_C::CanvasPanel_PlayerControlMode' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, CanvasPanel_PlayerControlView) == 0x0002B8, "Member 'UUMG_PhotoModeControllMenu_C::CanvasPanel_PlayerControlView' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, CanvasPanel_UploadWindow) == 0x0002C0, "Member 'UUMG_PhotoModeControllMenu_C::CanvasPanel_UploadWindow' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, CheckBox_EnableDOF) == 0x0002C8, "Member 'UUMG_PhotoModeControllMenu_C::CheckBox_EnableDOF' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, CheckBox_FocusToPlayer) == 0x0002D0, "Member 'UUMG_PhotoModeControllMenu_C::CheckBox_FocusToPlayer' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, CmnBack01) == 0x0002D8, "Member 'UUMG_PhotoModeControllMenu_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, DropHitBG) == 0x0002E0, "Member 'UUMG_PhotoModeControllMenu_C::DropHitBG' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_LookAtPlayerOff) == 0x0002E8, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_LookAtPlayerOff' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_LookAtPlayerOn) == 0x0002F0, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_LookAtPlayerOn' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_ResetCamera) == 0x0002F8, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_ResetCamera' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_ResetDOF) == 0x000300, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_ResetDOF' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_ResetFov) == 0x000308, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_ResetFov' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_ResetRotation) == 0x000310, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_ResetRotation' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_TabGesture) == 0x000318, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_TabGesture' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_TabLeft) == 0x000320, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_TabLeft' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_TabLeft_1) == 0x000328, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_TabLeft_1' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_TabLookAt) == 0x000330, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_TabLookAt' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_TabRight) == 0x000338, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_TabRight' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_TabRight_1) == 0x000340, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_TabRight_1' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_TabRotation) == 0x000348, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_TabRotation' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_TabSkill) == 0x000350, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_TabSkill' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_TabZoom) == 0x000358, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_TabZoom' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBButton_TalkMode) == 0x000360, "Member 'UUMG_PhotoModeControllMenu_C::SBButton_TalkMode' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBCheckBox_ApertureTest) == 0x000368, "Member 'UUMG_PhotoModeControllMenu_C::SBCheckBox_ApertureTest' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBCheckBoxCmnCheckBox01_DebugOverideTime) == 0x000370, "Member 'UUMG_PhotoModeControllMenu_C::SBCheckBoxCmnCheckBox01_DebugOverideTime' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBTextButton_ToggleCameraControlView) == 0x000378, "Member 'UUMG_PhotoModeControllMenu_C::SBTextButton_ToggleCameraControlView' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SBTextButton_TogglePlayerControlView) == 0x000380, "Member 'UUMG_PhotoModeControllMenu_C::SBTextButton_TogglePlayerControlView' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, ShowTutorialHelpBtn) == 0x000388, "Member 'UUMG_PhotoModeControllMenu_C::ShowTutorialHelpBtn' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SizeBox_Gesture) == 0x000390, "Member 'UUMG_PhotoModeControllMenu_C::SizeBox_Gesture' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SizeBox_LookAt) == 0x000398, "Member 'UUMG_PhotoModeControllMenu_C::SizeBox_LookAt' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SizeBox_Rotation) == 0x0003A0, "Member 'UUMG_PhotoModeControllMenu_C::SizeBox_Rotation' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SizeBox_Skill) == 0x0003A8, "Member 'UUMG_PhotoModeControllMenu_C::SizeBox_Skill' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SizeBox_SkillTabButton) == 0x0003B0, "Member 'UUMG_PhotoModeControllMenu_C::SizeBox_SkillTabButton' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, SizeBox_Zoom) == 0x0003B8, "Member 'UUMG_PhotoModeControllMenu_C::SizeBox_Zoom' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, Slider_Aperture) == 0x0003C0, "Member 'UUMG_PhotoModeControllMenu_C::Slider_Aperture' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, Slider_DebugOverrideTime) == 0x0003C8, "Member 'UUMG_PhotoModeControllMenu_C::Slider_DebugOverrideTime' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, Slider_FocalDistance) == 0x0003D0, "Member 'UUMG_PhotoModeControllMenu_C::Slider_FocalDistance' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, Slider_FOV) == 0x0003D8, "Member 'UUMG_PhotoModeControllMenu_C::Slider_FOV' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, Slider_MaxBackgroundRadius) == 0x0003E0, "Member 'UUMG_PhotoModeControllMenu_C::Slider_MaxBackgroundRadius' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, Slider_MaxForegroundRadius) == 0x0003E8, "Member 'UUMG_PhotoModeControllMenu_C::Slider_MaxForegroundRadius' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, Slider_RotationPitch) == 0x0003F0, "Member 'UUMG_PhotoModeControllMenu_C::Slider_RotationPitch' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, Slider_RotationRoll) == 0x0003F8, "Member 'UUMG_PhotoModeControllMenu_C::Slider_RotationRoll' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, Slider_RotationYaw) == 0x000400, "Member 'UUMG_PhotoModeControllMenu_C::Slider_RotationYaw' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, Text_ToggleCameraControlViewKey) == 0x000408, "Member 'UUMG_PhotoModeControllMenu_C::Text_ToggleCameraControlViewKey' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, Text_TogglePlayerControlViewKey) == 0x000410, "Member 'UUMG_PhotoModeControllMenu_C::Text_TogglePlayerControlViewKey' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, TextBlock_CameraControlViewTitle) == 0x000418, "Member 'UUMG_PhotoModeControllMenu_C::TextBlock_CameraControlViewTitle' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, TextBlock_ControlMode) == 0x000420, "Member 'UUMG_PhotoModeControllMenu_C::TextBlock_ControlMode' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, TextBlock_KeyGuideCameraMove) == 0x000428, "Member 'UUMG_PhotoModeControllMenu_C::TextBlock_KeyGuideCameraMove' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, TextBlock_KeyGuideCameraRot) == 0x000430, "Member 'UUMG_PhotoModeControllMenu_C::TextBlock_KeyGuideCameraRot' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, TextBlock_KeyGuideScreenshot) == 0x000438, "Member 'UUMG_PhotoModeControllMenu_C::TextBlock_KeyGuideScreenshot' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, TextBlock_KeyGuideToggleUiVisible) == 0x000440, "Member 'UUMG_PhotoModeControllMenu_C::TextBlock_KeyGuideToggleUiVisible' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, TextBlock_PlayerControlViewTitle) == 0x000448, "Member 'UUMG_PhotoModeControllMenu_C::TextBlock_PlayerControlViewTitle' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, TextBlock_SwitchControlMode) == 0x000450, "Member 'UUMG_PhotoModeControllMenu_C::TextBlock_SwitchControlMode' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, TextBlock_TalkModeButton) == 0x000458, "Member 'UUMG_PhotoModeControllMenu_C::TextBlock_TalkModeButton' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, UMG_PhotoMode_UploadWindowMenu) == 0x000460, "Member 'UUMG_PhotoModeControllMenu_C::UMG_PhotoMode_UploadWindowMenu' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, UMG_PhotoModeControll_UploadList) == 0x000468, "Member 'UUMG_PhotoModeControllMenu_C::UMG_PhotoModeControll_UploadList' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, UMG_PhotoModeControlMenuSkillList) == 0x000470, "Member 'UUMG_PhotoModeControllMenu_C::UMG_PhotoModeControlMenuSkillList' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, UMG_PhotoModeEmotionView) == 0x000478, "Member 'UUMG_PhotoModeControllMenu_C::UMG_PhotoModeEmotionView' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, UMG_PhotoModePlayerControlViewHeader) == 0x000480, "Member 'UUMG_PhotoModeControllMenu_C::UMG_PhotoModePlayerControlViewHeader' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, UMG_PhotoModePlayerListMain) == 0x000488, "Member 'UUMG_PhotoModeControllMenu_C::UMG_PhotoModePlayerListMain' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, VerticalBox_CameraControlView) == 0x000490, "Member 'UUMG_PhotoModeControllMenu_C::VerticalBox_CameraControlView' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, VerticalBox_PlayerControlView) == 0x000498, "Member 'UUMG_PhotoModeControllMenu_C::VerticalBox_PlayerControlView' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, WidgetSwitcher_CameraControlView) == 0x0004A0, "Member 'UUMG_PhotoModeControllMenu_C::WidgetSwitcher_CameraControlView' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, WidgetSwitcher_PlayerControlView) == 0x0004A8, "Member 'UUMG_PhotoModeControllMenu_C::WidgetSwitcher_PlayerControlView' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, bDesignCheck) == 0x0004B0, "Member 'UUMG_PhotoModeControllMenu_C::bDesignCheck' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, DebugDisplayTabIndex) == 0x0004B4, "Member 'UUMG_PhotoModeControllMenu_C::DebugDisplayTabIndex' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, bPlayerControlMode) == 0x0004B8, "Member 'UUMG_PhotoModeControllMenu_C::bPlayerControlMode' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, bTalkMode) == 0x0004B9, "Member 'UUMG_PhotoModeControllMenu_C::bTalkMode' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, bIsMouseButtonDownAtDragHitBg) == 0x0004BA, "Member 'UUMG_PhotoModeControllMenu_C::bIsMouseButtonDownAtDragHitBg' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, PhotoModeController) == 0x0004C0, "Member 'UUMG_PhotoModeControllMenu_C::PhotoModeController' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, DefaultFOV) == 0x0004C8, "Member 'UUMG_PhotoModeControllMenu_C::DefaultFOV' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, bShowGestureTab) == 0x0004CC, "Member 'UUMG_PhotoModeControllMenu_C::bShowGestureTab' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, CameraControlViewTabArray) == 0x0004D0, "Member 'UUMG_PhotoModeControllMenu_C::CameraControlViewTabArray' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, CameraControlViewTabButtonArray) == 0x0004E0, "Member 'UUMG_PhotoModeControllMenu_C::CameraControlViewTabButtonArray' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, CameraControlViewTabTitleTextIdArray) == 0x0004F0, "Member 'UUMG_PhotoModeControllMenu_C::CameraControlViewTabTitleTextIdArray' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, PlayerControlViewTabArray) == 0x000500, "Member 'UUMG_PhotoModeControllMenu_C::PlayerControlViewTabArray' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, PlayerControlViewTabButtonArray) == 0x000510, "Member 'UUMG_PhotoModeControllMenu_C::PlayerControlViewTabButtonArray' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, PlayerControlViewTabTitleTextIdArray) == 0x000520, "Member 'UUMG_PhotoModeControllMenu_C::PlayerControlViewTabTitleTextIdArray' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, WorkData) == 0x000530, "Member 'UUMG_PhotoModeControllMenu_C::WorkData' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, bShowCameraControlView) == 0x000538, "Member 'UUMG_PhotoModeControllMenu_C::bShowCameraControlView' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, bShowPlayerControlView) == 0x000539, "Member 'UUMG_PhotoModeControllMenu_C::bShowPlayerControlView' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, UploadThumbnailImages) == 0x000540, "Member 'UUMG_PhotoModeControllMenu_C::UploadThumbnailImages' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, bIsUploadFinish) == 0x000550, "Member 'UUMG_PhotoModeControllMenu_C::bIsUploadFinish' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, UploadPhotodataMargin_1) == 0x000554, "Member 'UUMG_PhotoModeControllMenu_C::UploadPhotodataMargin_1' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, UploadPhotodataMargin_2) == 0x000560, "Member 'UUMG_PhotoModeControllMenu_C::UploadPhotodataMargin_2' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, UploadPhotodataMargin_3) == 0x000570, "Member 'UUMG_PhotoModeControllMenu_C::UploadPhotodataMargin_3' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, PhotoModeImageComponent) == 0x000580, "Member 'UUMG_PhotoModeControllMenu_C::PhotoModeImageComponent' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, bEnableDOF) == 0x000588, "Member 'UUMG_PhotoModeControllMenu_C::bEnableDOF' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, bFocusToPlayer) == 0x000589, "Member 'UUMG_PhotoModeControllMenu_C::bFocusToPlayer' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllMenu_C, TabButtonToolTip) == 0x000590, "Member 'UUMG_PhotoModeControllMenu_C::TabButtonToolTip' has a wrong offset!");

}

