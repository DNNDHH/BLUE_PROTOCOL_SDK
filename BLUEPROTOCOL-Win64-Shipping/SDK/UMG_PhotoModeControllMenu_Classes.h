#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C
	 * Size -> 0x0470 (FullSize[0x06E8] - InheritedSize[0x0278])
	 */
	class UUMG_PhotoModeControllMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    OutCameraControlView;                                    // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    OutPlayerControlView;                                    // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    InAnim;                                                  // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_MenuTop;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_Root;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_CameraControlMode;                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_CameraControlView;                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_PlayerControlMode;                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_PlayerControlView;                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_StampList;                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_Stamps;                                      // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_TemplateList;                                // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_UploadWindow;                                // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllCheckBox_C*                    CheckBox_EnableDof;                                      // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllCheckBox_C*                    CheckBox_FocusToPlayer;                                  // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        CmnBack01;                                               // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             DropHitBG;                                               // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Vignette;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBButton_LookAtPlayerOff;                                // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBButton_LookAtPlayerOn;                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextButton_C*                                     SBButton_ResetCamera;                                    // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextButtonCmnBtn27_C*                             SBButton_ResetDOF;                                       // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextButtonCmnBtn27_C*                             SBButton_ResetFov;                                       // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextButtonCmnBtn27_C*                             SBButton_ResetRotation;                                  // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextButtonCmnBtn27_C*                             SBButton_ResetVignette;                                  // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonTransparent_C*                              SBButton_StampDrop;                                      // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_StampTabStamp;                                  // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_StampTabTemplate;                               // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButton_C*                           SBButton_TabFrame;                                       // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButton_C*                           SBButton_TabGesture;                                     // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_TabLeft;                                        // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_TabLeft_2;                                      // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButton_C*                           SBButton_TabLookAt;                                      // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_TabRight;                                       // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_TabRight_2;                                     // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButton_C*                           SBButton_TabRotation;                                    // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButton_C*                           SBButton_TabSkill;                                       // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButton_C*                           SBButton_TabStamp;                                       // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButton_C*                           SBButton_TabZoom;                                        // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextButton_C*                                     SBButton_TalkMode;                                       // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBox_C*                                       SBCheckBox_ApertureTest;                                 // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          SBCheckBoxCmnCheckBox01_DebugOverideTime;                // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBSelectableButton_StampReset;                           // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBSelectableButton_StampReverse;                         // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextButton_C*                                     SBTextButton_ToggleCameraControlView;                    // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextButton_C*                                     SBTextButton_TogglePlayerControlView;                    // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_StampControlList;                              // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShowTutorialHelpBtn_C*                              ShowTutorialHelpBtn;                                     // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_Frame;                                           // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_Gesture;                                         // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_LookAt;                                          // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_Rotation;                                        // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_Skill;                                           // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_SkillTabButton;                                  // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_Stamp;                                           // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_Zoom;                                            // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSlider_C*                      Slider_Aperture;                                         // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSlider_C*                      Slider_DebugOverrideTime;                                // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSlider_C*                      Slider_FocalDistance;                                    // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSlider_C*                      Slider_FOV;                                              // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSliderShort_C*                 Slider_MaxBackgroundRadius;                              // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSliderShort_C*                 Slider_MaxForegroundRadius;                              // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSlider_C*                      Slider_RotationPitch;                                    // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSlider_C*                      Slider_RotationRoll;                                     // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSlider_C*                      Slider_RotationYaw;                                      // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSliderShort_C*                 Slider_Stamp_Alpha;                                      // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSliderShort_C*                 Slider_Stamp_Angle;                                      // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSliderShort_C*                 Slider_Stamp_Size;                                       // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSliderShort_C*                 Slider_Vignette_Blur;                                    // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSliderShort_C*                 Slider_Vignette_ColorA;                                  // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSliderShort_C*                 Slider_Vignette_ColorH;                                  // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSliderShort_C*                 Slider_Vignette_ColorS;                                  // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSliderShort_C*                 Slider_Vignette_ColorV;                                  // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSliderShort_C*                 Slider_Vignette_PosX;                                    // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSliderShort_C*                 Slider_Vignette_PosY;                                    // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSliderShort_C*                 Slider_Vignette_Roundness;                               // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControllSliderShort_C*                 Slider_Vignette_Size;                                    // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStampCategoryMenu_C*                                StampCategoryMenu;                                       // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_ToggleCameraControlViewKey;                         // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_TogglePlayerControlViewKey;                         // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextBlock_CameraControlViewTitle;                        // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextBlock_ControlMode;                                   // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextBlock_KeyGuideCameraMove;                            // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextBlock_KeyGuideCameraRot;                             // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextBlock_KeyGuideScreenshot;                            // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextBlock_KeyGuideToggleUiVisible;                       // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextBlock_PlayerControlViewTitle;                        // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextBlock_SwitchControlMode;                             // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextBlock_TalkModeButton;                                // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoMode_UploadWindowMenu_C*                   UMG_PhotoMode_UploadWindowMenu;                          // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControll_UploadList_C*                 UMG_PhotoModeControll_UploadList;                        // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeControlMenuSkillList_C*                UMG_PhotoModeControlMenuSkillList;                       // 0x0558(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModeEmotionView_C*                         UMG_PhotoModeEmotionView;                                // 0x0560(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModePlayerControlViewHeader_C*             UMG_PhotoModePlayerControlViewHeader;                    // 0x0568(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PhotoModePlayerListMain_C*                      UMG_PhotoModePlayerListMain;                             // 0x0570(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   UniformGridPanel_StampList;                              // 0x0578(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   UniformGridPanel_TemplateList;                           // 0x0580(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_CameraControlView;                           // 0x0588(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_PlayerControlView;                           // 0x0590(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_CameraControlView;                        // 0x0598(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_PlayerControlView;                        // 0x05A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_StampList;                                // 0x05A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bDesignCheck;                                            // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SB2I[0x3];                                   // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DebugDisplayTabIndex;                                    // 0x05B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPlayerControlMode;                                      // 0x05B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bTalkMode;                                               // 0x05B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsMouseButtonDownAtDragHitBg;                           // 0x05BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6DHY[0x5];                                   // 0x05BB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_SBPhotoModeController_C*                         PhotoModeController;                                     // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultFOV;                                              // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShowGestureTab;                                         // 0x05CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JB4N[0x3];                                   // 0x05CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWidget*>                                     CameraControlViewTabArray;                               // 0x05D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USBSelectableTextButton_C*>                   CameraControlViewTabButtonArray;                         // 0x05E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class FName>                                        CameraControlViewTabTitleTextIdArray;                    // 0x05F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UWidget*>                                     PlayerControlViewTabArray;                               // 0x0600(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USBSelectableTextButton_C*>                   PlayerControlViewTabButtonArray;                         // 0x0610(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class FName>                                        PlayerControlViewTabTitleTextIdArray;                    // 0x0620(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class USBPhotoModePlayerControlData*                       WorkData;                                                // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShowCameraControlView;                                  // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowPlayerControlView;                                  // 0x0639(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9XYN[0x6];                                   // 0x063A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UImage*>                                      UploadThumbnailImages;                                   // 0x0640(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       bIsUploading;                                            // 0x0650(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4TVE[0x7];                                   // 0x0651(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBPhotoModeImageComponent*                          PhotoModeImageComponent;                                 // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableDOF;                                              // 0x0660(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFocusToPlayer;                                          // 0x0661(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5FT9[0x6];                                   // 0x0662(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                             TabButtonToolTip;                                        // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        VignetteColor;                                           // 0x0670(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_PhotoModeStamp_C*                               DraggingStamp;                                           // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bNewStamp;                                               // 0x0688(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H1U4[0x7];                                   // 0x0689(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWBP_PhotoModeStampControlListItem_C*>        StampControlItemList;                                    // 0x0690(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UBP_PhotoModeStampControlData_C*>             StampControlDataList;                                    // 0x06A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UBP_PhotoModeStampControlData_C*                     SelectedStampControlData;                                // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            TemplateIdList;                                          // 0x06B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UTemplateTextItems_C*>                        TemplateItemList;                                        // 0x06C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UChatStampButtonItem_C*>                      StampItemList;                                           // 0x06D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void MoveStampListItem(class UWBP_PhotoModeStampControlListItem_C* Sender, int32_t Offset);
		class UWidget* Get_SBButton_TabSkill_ToolTipWidget_1();
		class UWidget* Get_SBButton_TabGesture_ToolTipWidget_1();
		class UWidget* Get_SBButton_TabLookAt_ToolTipWidget_1();
		class UWidget* Get_SBButton_TabZoom_ToolTipWidget_1();
		class UWidget* Get_SBButton_TabRotation_ToolTipWidget_1();
		void CreateToolTip(const class FName& TextId, class UWidget** TabButtonToolTip);
		bool IsGamepadMode();
		void SetRootVisible(bool bVisible, bool Instantly);
		void InitKeyGuidText();
		bool IsKeyboardMode();
		struct FEventReply On_DropHitBG_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void BndEvt__UMG_PhotoModeControllMenu_SBButton_Stamp_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoModeControllMenu_SBButtonTransparent_Stamp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoModeControllMenu_SBButton_StampText_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void ConstructUiStampGraph();
		void OnClickedDeleteStamp(class UWBP_PhotoModeStampControlListItem_C* Sender);
		void UpdateStampControlList();
		void InitStampControlListItem(class UWBP_PhotoModeStampControlListItem_C* item);
		void OnClickedStampUp(class UWBP_PhotoModeStampControlListItem_C* Sender);
		void OnClickedStampDown(class UWBP_PhotoModeStampControlListItem_C* Sender);
		void OnClickedStamp(class UWBP_PhotoModeStamp_C* Sender);
		void OnClickedStampSelect(class UWBP_PhotoModeStampControlListItem_C* Sender);
		void SetSelectedStampControlData(class UBP_PhotoModeStampControlData_C* Data);
		void BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Size_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Angle_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Alpha_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__UMG_PhotoModeControllMenu_SBSelectableButton_StampReverse_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoModeControllMenu_SBSelectableButton_StampReset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void SetStampReverse(bool bReverse);
		void SetSelectedStampControlDataByStamp(class UObject* Stamp);
		void SetDraggingStamp(class UWBP_PhotoModeStamp_C* DraggingStamp, bool bNewStamp);
		void OnClickedTemplate(class UTemplateTextItems_C* InSelectedItem);
		void BndEvt__UMG_PhotoModeControllMenu_StampCategoryMenu_K2Node_ComponentBoundEvent_7_OnUpdateStamp__DelegateSignature(const struct FSBStampCategoryMasterData& StampCategoryMasterData);
		void OnClickedStampListItem(int32_t RetStampID, class UChatStampButtonItem_C* InSelectItem);
		void BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_H_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_S_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_V_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Alpha_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Blur_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Squareness_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_PosX_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_PosY_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_SizeX_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(float Value);
		void ConstructUiFrameGraph();
		void BndEvt__UMG_PhotoModeControllMenu_SBButton_ResetVignette_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
		void InitValuesInFrameGraph(class ABP_SBPhotoModeController_C* PMC);
		void UpdateVignetteColor();
		void UpdateVignetteEnable();
		void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_1_WindowCloseFinishedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_0_WindowUploadFinishedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_3_WindowUploadStartEvent__DelegateSignature();
		void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_4_WindowUploadFaildFinishedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeControll_UploadList_K2Node_ComponentBoundEvent_5_UploadSelectWindowClickEvent__DelegateSignature();
		void BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Button_ResetTab1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Tab1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_LookAtPlayerOn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_LookAtPlayerOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__Button_Tab2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_ResetRotation_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Tab5_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Tab4_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Tab3_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
		void SetActiveCameraControlViewWidget(class UWidget* Widget);
		void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_22_EventClicked__DelegateSignature();
		void BndEvt__Button_TabLeft_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_TabRight_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender);
		void BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender);
		void BndEvt__SBButton_ResetCamera_2_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value);
		void SetLookAtPlayer(bool bLookAtPlayer);
		void BndEvt__SBButton_TalkMode_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SBButton_ResetCamera_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
		void SetFocalDistance(float Value);
		void SetFOV(float Value);
		void SetRotation(const struct FRotator& Value);
		void BndEvt__UMG_PhotoModeControllMenu_SBTextButton_Ctrl_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void SetActivePlayerControlViewWidget(class UWidget* Widget);
		void BndEvt__UMG_PhotoModeControllMenu_SBTextButton_TogglePlayerControlView_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature(const class FName& EmotionId);
		void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature(ESBFacialType FacialType);
		void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature(bool bIsChecked);
		void UpdateDofUi();
		void BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature(float Value);
		void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature(float Value);
		void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature(ESBLipSyncType LipSyncType);
		void BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature(bool bCloseEyes);
		void BndEvt__UMG_PhotoModeControllMenu_SBButton_TabFrame_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoModeControllMenu_SBButton_TabStamp_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
		void SetPhotoModeContoller(class ABP_SBPhotoModeController_C* PMC);
		void PreConstruct(bool IsDesignTime);
		void SetControlMode(bool bPlayerControlMode);
		void Construct();
		void SetTalkMode(bool bTalkMode);
		void Destruct();
		void OnChangeVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void UpdateDesign();
		void ToggleCameraControlView();
		void TogglePlayerControlView();
		void RefreshPlayerControlData();
		void UpdateSkillList();
		void Event_OnSavedUploadImage(class UObject* Sender, class UObject* Param);
		void OnPrepareScreenshot(class UObject* Sender, class UObject* Param);
		void OnFinishScreenshot(class UObject* Sender, class UObject* Param);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_UMG_PhotoModeControllMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
