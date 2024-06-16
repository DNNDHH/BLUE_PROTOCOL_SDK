#pragma once

 

// Package: WBP_CharaSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SecondPasswordSenderStartType_structs.hpp"
#include "SecondPasswordSenderEndReason_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaSelect.WBP_CharaSelect_C
// 0x0508 (0x0880 - 0x0378)
class UWBP_CharaSelect_C final : public USBCharacterSelectWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimRetainer;                                      // 0x0380(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLine;                                          // 0x0388(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimBtnOut;                                        // 0x0398(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimBtnIn;                                         // 0x03A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             AdventureRankText;                                 // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnLeftImg;                                        // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnRightImg;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaSelect_BustUpImage_C*         BustUpImage;                                       // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                CanvasBtns;                                        // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ChangeposeButton;                                  // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharaCreateBg_C*                       CharaCreateBg;                                     // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            CharacterCreateButton;                             // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CharacterCreateButtonText;                         // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CharacterLocationText;                             // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CharacterNameText;                                 // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            CharacterSelectAddButton;                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharacterSelectListItem_C*         CharacterSelectListItem1;                          // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharacterSelectListItem_C*         CharacterSelectListItem2;                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharacterSelectListItem_C*         CharacterSelectListItem3;                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharacterSelectListItem_C*         CharacterSelectListItem4;                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharacterSelectListItem_C*         CharacterSelectListItem5;                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               CharacterSelectOverlay;                            // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CharacterSlotMax;                                  // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CharacterSlotNow;                                  // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CharacterSlotSlash;                                // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CharacterSlotText;                                 // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CharaMaxText;                                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         CharaNumHorizontal;                                // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CharaNumText;                                      // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconPlate_C*                      ClassIconPlate;                                    // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ClassText;                                         // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DebugButton;                                       // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DebugCanvas;                                       // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    DeleteBtnText;                                     // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    DeleteBtnText_1;                                   // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    DeleteBtnText_2;                                   // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DeleteButton;                                      // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DeleteImmediateButton;                             // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FollowBlocker;                                     // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_15;                                          // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_480;                                         // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBGFooter1;                                    // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBGFooter2;                                    // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBGHeader;                                     // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBGLeft;                                       // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBGRight;                                      // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBox1;                                         // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBox2;                                         // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageCircle1;                                      // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageCircle2;                                      // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InfoBg;                                            // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelText;                                         // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line01_1;                                          // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line01_2;                                          // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line01_3;                                          // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line02;                                            // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line03;                                            // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line04;                                            // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line05;                                            // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line06;                                            // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line07;                                            // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line08;                                            // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line09;                                            // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line10;                                            // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line11;                                            // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            RenameButton;                                      // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            RevivalButton;                                     // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButtonLeft;                                      // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButtonRight;                                     // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_DeleteTime;                    // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    StartBtnText;                                      // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    StartBtnText_1;                                    // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    StartBtnText_2;                                    // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            StartButton;                                       // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Command;                               // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_State;                                 // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_CharaselectDebugbButton_C*         WPB_CharaselectDebugbButton;                       // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnStartWithCharacter;                              // 0x0648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0658(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequestCreateMode;                               // 0x0668(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnStartFriendSession;                              // 0x0678(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWBP_CharacterSelectListItem_C*> CharaSeleListItem;                                 // 0x0688(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FSBUserOnlineAccountCharacter>  CharaInfoList;                                     // 0x0698(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Direction;                                         // 0x06A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMove;                                            // 0x06AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_872B[0x3];                                     // 0x06AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CntFrame;                                          // 0x06B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_872C[0x4];                                     // 0x06B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector2D>                      beforPos;                                          // 0x06B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector2D>                      AfterPos;                                          // 0x06C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SelectICharandex;                                  // 0x06D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_872D[0x4];                                     // 0x06DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CharacterSelectListItem_C*         RoleCharaItem;                                     // 0x06E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RoleCharaItemNum;                                  // 0x06E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MaxLeftPos;                                        // 0x06EC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MaxRightPos;                                       // 0x06F4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_872E[0x4];                                     // 0x06FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector2D>                      InitPos;                                           // 0x0700(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_CharacterSelectListItem_C*         beforeMainItem;                                    // 0x0710(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharacterSelectListItem_C*         AfterMainItem;                                     // 0x0718(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MaxScale;                                          // 0x0720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MinScale;                                          // 0x0728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxOpacity;                                        // 0x0730(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MixOpacity;                                        // 0x0734(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxCharaOpacity;                                   // 0x0738(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinCharaOpacity;                                   // 0x073C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimDel_out;                                       // 0x0740(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDelChara;                                        // 0x0748(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_872F[0x7];                                     // 0x0749(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CharacterId;                                       // 0x0750(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          NoizTickCheck;                                     // 0x0760(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8730[0x3];                                     // 0x0761(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NoizTickCheckAfterglow;                            // 0x0764(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentPage;                                       // 0x0768(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8731[0x4];                                     // 0x076C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_CharacterSelectCaptureOne_C*> CaptureStudio;                                     // 0x0770(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_CharacterSelectCaptureBustUp_C*     CaptureStudioBust;                                 // 0x0780(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           MoveSelectBlocker;                                 // 0x0788(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBCharaCreateParameter>        CharaCreateParameters;                             // 0x0790(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         StartDelayTime;                                    // 0x07A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8732[0x4];                                     // 0x07A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MultipleSelectDialog_C*            MultiDialog;                                       // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USecondPasswordSender_C*                SecondPasswordSender;                              // 0x07B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USecondPasswordExpiredDialog_C*         SecondPasswordExpiredDialog;                       // 0x07B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDeleteDialogFirst_C*                   DeleteDialogFirst;                                 // 0x07C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDeleteDialogLast_C*                    DeleteDialogLast;                                  // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNameSettingDialog_C*                   NameSetting;                                       // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   BanTypeMessage;                                    // 0x07D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBLastJoinedPartyInfoState            LastJoinedPartyInfo;                               // 0x07F0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBLastJoinedContentInfoState          LastJoinedContentInfo;                             // 0x0810(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bTargetReturnDisconnectedParty;                    // 0x0828(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bReturnDisconnect;                                 // 0x0829(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bRejectToReturnParty;                              // 0x082A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8733[0x5];                                     // 0x082B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRefresh;                                         // 0x0830(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bDisplayedReturnPartyTimeOver;                     // 0x0840(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsEnableAllButton;                                 // 0x0841(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8734[0x6];                                     // 0x0842(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           UIBlocker_0;                                       // 0x0848(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_AddCharacterSlotDialog_C*          AddCharacterSlotDialog;                            // 0x0850(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           DeleteBlocker;                                     // 0x0858(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           Dialog;                                            // 0x0860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentCharacterNotificationCnt;                   // 0x0868(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Open;                                              // 0x086C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LevelMapLoad;                                      // 0x086D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8735[0x2];                                     // 0x086E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         RefusedReJoinPartyLogList;                         // 0x0870(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnStartWithCharacter__DelegateSignature(const class FString& Param_CharacterId, int32 ListIndex, bool Param_bReturnDisconnect);
	void OnClose__DelegateSignature();
	void OnRequestCreateMode__DelegateSignature();
	void OnStartFriendSession__DelegateSignature(const class FString& Param_CharacterId, int32 ListIndex, const class FString& FriendCharacterId);
	void OnRefresh__DelegateSignature();
	void ExecuteUbergraph_WBP_CharaSelect(int32 EntryPoint);
	void DeleteButtonUpdate();
	void ResetCharacterPause();
	void LoadSabLevel();
	void DebugInitialize();
	void DecisonDialogResult(EDialogResult Result);
	void OnCharacterBuySlot(bool bWasSuccessful, int32 RetCode);
	void CustomEvent_3();
	void OnCharacterSlotPurchase(bool bWasSuccessful, int32 RetCode);
	void OnGetCryptocurrency(int32 RetCode, const struct FSBCryptoCurrency& InCryptocurrency);
	void CreateAddSlotDialog(const struct FSBCryptoCurrency& SBCryptoCurrency);
	void CustomEvent_2(class UWBP_AddCharacterSlotDialog_C* Widget, bool Add);
	void BndEvt__WBP_CharaSelect_SBButton_C_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
	void OnRefuseReJoinParty(int32 RetCode);
	void OnDecideReturnContentReportDialog_Event(const EYesNoDialogResult Result);
	void BndEvt__RevivalButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__RevivalButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__DeleteImmediateButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__DeleteImmediateButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void OnDecideReturnPartyReportDialog_Event(const EYesNoDialogResult Result);
	void OnCharacterRename(int32 RetCode);
	void Close();
	void _________0(const class FString& PlayerName);
	void BndEvt__RenameButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	void CustomEvent(const EYesNoDialogResult Result);
	void BndEvt__DeleteImmediateButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void OnRestoreCharacter(int32 RetCode);
	void CustomEvent_0(const EYesNoDialogResult Result);
	void BndEvt__RevivalButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void OnEndSecondPasswordSender(ESendSecondPasswordRole Role, ESecondPasswordSenderEndReason Reason, ESecondPasswordSenderStartType StartType);
	void HideCharaSelect();
	void CustomEvent_1(int32 Result);
	void OnDecideDeleteDialog();
	void BndEvt__ChangeposeButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ChangeposeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CharacterCreateButton_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
	void StartGamePlayInAnim();
	void ChangePause();
	void RemoveMoveBlocker();
	void UpdetaBust_Up();
	void BndEvt__ChangePauseButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void InitializeCharacterSelectOverlay();
	void ShowCharaSelect();
	void OnUICancel();
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature();
	void WidgetAnimationEvt_AnimBtnIn_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_AnimBtnOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__SBButtonRight_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__SBButtonLeft_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__SBButtonRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButtonRight_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButtonLeft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButtonLeft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CharacterSelectListItem5_K2Node_ComponentBoundEvent_316_EndDelAnim__DelegateSignature();
	void BndEvt__CharacterSelectListItem4_K2Node_ComponentBoundEvent_285_EndDelAnim__DelegateSignature();
	void BndEvt__CharacterSelectListItem3_K2Node_ComponentBoundEvent_260_EndDelAnim__DelegateSignature();
	void BndEvt__CharacterSelectListItem2_K2Node_ComponentBoundEvent_233_EndDelAnim__DelegateSignature();
	void BndEvt__CharacterSelectListItem1_K2Node_ComponentBoundEvent_210_EndDelAnim__DelegateSignature();
	void BndEvt__CharacterCreateButton_K2Node_ComponentBoundEvent_515_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CharacterCreateButton_K2Node_ComponentBoundEvent_496_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_304_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_277_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_148_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_129_OnButtonHoverEvent__DelegateSignature();
	void DeleteCharacter(bool bForceDelete);
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_679_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CharacterCreateButton_K2Node_ComponentBoundEvent_559_OnButtonClickedEvent__DelegateSignature();
	void OnDeletedCharacter(int32 RetCode, bool bForceDelete);
	void OnUpdatePlayerInfo(bool bWasSuccessful, const class FString& DefaultCharacterId);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void BndEvt__DebugButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButtonLeft_K2Node_ComponentBoundEvent_368_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButtonRight_K2Node_ComponentBoundEvent_397_OnButtonClickedEvent__DelegateSignature();
	void Show();
	void Init_Chara_Image(int32 InSelectIndex);
	void Setup_Chara_Sele_List();
	void UpdateMove(float InDeltaTime);
	void UpdateSelectCursorVisible();
	void InitCharaVisible();
	void Preload_Chara_Image();
	void ResetCharaSeleItemPos();
	void Set_Delete_Start_Button_Visible(ESlateVisibility InState);
	void GetDefaultSelectIndex(TArray<struct FSBUserOnlineAccountCharacter>& InList, const class FString& InCharacterId, int32* RetIndex);
	void ResetCharaSeleScale();
	void UpdateCharaSeleText();
	void Update_Enable_All_Button(bool InEnable);
	void ClearCache();
	void UpdateCharaInfo();
	void UpdateCharaSlotText();
	void IsCreateCharacter(bool* Ret);
	void Set_Chara_Sele_List_Item_Data(int32 CharaSeleListItemNum, int32 CharaIndex);
	void SetEnableSelectCursor(bool IsLeft, bool IsRight);
	void Set_Visible_Select_Cursor(ESlateVisibility InLeftState, ESlateVisibility InRightState);
	void Initialize_Character_Studio();
	void ShowSecondPasswordSender(ESecondPasswordSenderStartType Role);
	void HideSecondPasswordSender();
	void ShowDialogSecondPasswordExpired();
	void OnEndDialogSecondPasswordExpired();
	void ShowDialogDeleteFirst();
	void OnEndDialogDeleteFirst(bool DELETE);
	void ShowDialogDeleteLast();
	void OnEndDialogDeleteLast(bool DELETE);
	void GetActiveCharacterNum(int32* NuM);
	void InitCurrentCharacterInfoAll();
	void ActiveReJoinParty(bool* bResult);
	void RejectReturnDisconnectedParty();
	void IsEnableContentRejoin(bool* bEnableContentRejoin);
	void IsEnablePartyRejoin(bool* bEnablePartyRejoin);
	void Init_Cur_Character_Ban_System_Message(bool* bIsBaned);
	void SetButtonFocus();
	void IsinputEnabled(bool* Enabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaSelect_C">();
	}
	static class UWBP_CharaSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaSelect_C>();
	}
};
static_assert(alignof(UWBP_CharaSelect_C) == 0x000008, "Wrong alignment on UWBP_CharaSelect_C");
static_assert(sizeof(UWBP_CharaSelect_C) == 0x000880, "Wrong size on UWBP_CharaSelect_C");
static_assert(offsetof(UWBP_CharaSelect_C, UberGraphFrame) == 0x000378, "Member 'UWBP_CharaSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, AnimRetainer) == 0x000380, "Member 'UWBP_CharaSelect_C::AnimRetainer' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, AnimLine) == 0x000388, "Member 'UWBP_CharaSelect_C::AnimLine' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, AnimIn) == 0x000390, "Member 'UWBP_CharaSelect_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, AnimBtnOut) == 0x000398, "Member 'UWBP_CharaSelect_C::AnimBtnOut' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, AnimBtnIn) == 0x0003A0, "Member 'UWBP_CharaSelect_C::AnimBtnIn' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, AdventureRankText) == 0x0003A8, "Member 'UWBP_CharaSelect_C::AdventureRankText' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, BtnLeftImg) == 0x0003B0, "Member 'UWBP_CharaSelect_C::BtnLeftImg' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, BtnRightImg) == 0x0003B8, "Member 'UWBP_CharaSelect_C::BtnRightImg' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, BustUpImage) == 0x0003C0, "Member 'UWBP_CharaSelect_C::BustUpImage' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CanvasBtns) == 0x0003C8, "Member 'UWBP_CharaSelect_C::CanvasBtns' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, ChangeposeButton) == 0x0003D0, "Member 'UWBP_CharaSelect_C::ChangeposeButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharaCreateBg) == 0x0003D8, "Member 'UWBP_CharaSelect_C::CharaCreateBg' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterCreateButton) == 0x0003E0, "Member 'UWBP_CharaSelect_C::CharacterCreateButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterCreateButtonText) == 0x0003E8, "Member 'UWBP_CharaSelect_C::CharacterCreateButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterLocationText) == 0x0003F0, "Member 'UWBP_CharaSelect_C::CharacterLocationText' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterNameText) == 0x0003F8, "Member 'UWBP_CharaSelect_C::CharacterNameText' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterSelectAddButton) == 0x000400, "Member 'UWBP_CharaSelect_C::CharacterSelectAddButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterSelectListItem1) == 0x000408, "Member 'UWBP_CharaSelect_C::CharacterSelectListItem1' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterSelectListItem2) == 0x000410, "Member 'UWBP_CharaSelect_C::CharacterSelectListItem2' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterSelectListItem3) == 0x000418, "Member 'UWBP_CharaSelect_C::CharacterSelectListItem3' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterSelectListItem4) == 0x000420, "Member 'UWBP_CharaSelect_C::CharacterSelectListItem4' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterSelectListItem5) == 0x000428, "Member 'UWBP_CharaSelect_C::CharacterSelectListItem5' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterSelectOverlay) == 0x000430, "Member 'UWBP_CharaSelect_C::CharacterSelectOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterSlotMax) == 0x000438, "Member 'UWBP_CharaSelect_C::CharacterSlotMax' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterSlotNow) == 0x000440, "Member 'UWBP_CharaSelect_C::CharacterSlotNow' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterSlotSlash) == 0x000448, "Member 'UWBP_CharaSelect_C::CharacterSlotSlash' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterSlotText) == 0x000450, "Member 'UWBP_CharaSelect_C::CharacterSlotText' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharaMaxText) == 0x000458, "Member 'UWBP_CharaSelect_C::CharaMaxText' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharaNumHorizontal) == 0x000460, "Member 'UWBP_CharaSelect_C::CharaNumHorizontal' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharaNumText) == 0x000468, "Member 'UWBP_CharaSelect_C::CharaNumText' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, ClassIconPlate) == 0x000470, "Member 'UWBP_CharaSelect_C::ClassIconPlate' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, ClassText) == 0x000478, "Member 'UWBP_CharaSelect_C::ClassText' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CmnBack01) == 0x000480, "Member 'UWBP_CharaSelect_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, DebugButton) == 0x000488, "Member 'UWBP_CharaSelect_C::DebugButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, DebugCanvas) == 0x000490, "Member 'UWBP_CharaSelect_C::DebugCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, DeleteBtnText) == 0x000498, "Member 'UWBP_CharaSelect_C::DeleteBtnText' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, DeleteBtnText_1) == 0x0004A0, "Member 'UWBP_CharaSelect_C::DeleteBtnText_1' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, DeleteBtnText_2) == 0x0004A8, "Member 'UWBP_CharaSelect_C::DeleteBtnText_2' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, DeleteButton) == 0x0004B0, "Member 'UWBP_CharaSelect_C::DeleteButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, DeleteImmediateButton) == 0x0004B8, "Member 'UWBP_CharaSelect_C::DeleteImmediateButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, FollowBlocker) == 0x0004C0, "Member 'UWBP_CharaSelect_C::FollowBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Image) == 0x0004C8, "Member 'UWBP_CharaSelect_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Image_0) == 0x0004D0, "Member 'UWBP_CharaSelect_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Image_1) == 0x0004D8, "Member 'UWBP_CharaSelect_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Image_2) == 0x0004E0, "Member 'UWBP_CharaSelect_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Image_3) == 0x0004E8, "Member 'UWBP_CharaSelect_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Image_4) == 0x0004F0, "Member 'UWBP_CharaSelect_C::Image_4' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Image_5) == 0x0004F8, "Member 'UWBP_CharaSelect_C::Image_5' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Image_6) == 0x000500, "Member 'UWBP_CharaSelect_C::Image_6' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Image_15) == 0x000508, "Member 'UWBP_CharaSelect_C::Image_15' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Image_480) == 0x000510, "Member 'UWBP_CharaSelect_C::Image_480' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, ImageBGFooter1) == 0x000518, "Member 'UWBP_CharaSelect_C::ImageBGFooter1' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, ImageBGFooter2) == 0x000520, "Member 'UWBP_CharaSelect_C::ImageBGFooter2' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, ImageBGHeader) == 0x000528, "Member 'UWBP_CharaSelect_C::ImageBGHeader' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, ImageBGLeft) == 0x000530, "Member 'UWBP_CharaSelect_C::ImageBGLeft' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, ImageBGRight) == 0x000538, "Member 'UWBP_CharaSelect_C::ImageBGRight' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, ImageBox1) == 0x000540, "Member 'UWBP_CharaSelect_C::ImageBox1' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, ImageBox2) == 0x000548, "Member 'UWBP_CharaSelect_C::ImageBox2' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, ImageCircle1) == 0x000550, "Member 'UWBP_CharaSelect_C::ImageCircle1' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, ImageCircle2) == 0x000558, "Member 'UWBP_CharaSelect_C::ImageCircle2' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, InfoBg) == 0x000560, "Member 'UWBP_CharaSelect_C::InfoBg' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, LevelText) == 0x000568, "Member 'UWBP_CharaSelect_C::LevelText' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Line01_1) == 0x000570, "Member 'UWBP_CharaSelect_C::Line01_1' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Line01_2) == 0x000578, "Member 'UWBP_CharaSelect_C::Line01_2' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Line01_3) == 0x000580, "Member 'UWBP_CharaSelect_C::Line01_3' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Line02) == 0x000588, "Member 'UWBP_CharaSelect_C::Line02' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Line03) == 0x000590, "Member 'UWBP_CharaSelect_C::Line03' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Line04) == 0x000598, "Member 'UWBP_CharaSelect_C::Line04' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Line05) == 0x0005A0, "Member 'UWBP_CharaSelect_C::Line05' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Line06) == 0x0005A8, "Member 'UWBP_CharaSelect_C::Line06' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Line07) == 0x0005B0, "Member 'UWBP_CharaSelect_C::Line07' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Line08) == 0x0005B8, "Member 'UWBP_CharaSelect_C::Line08' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Line09) == 0x0005C0, "Member 'UWBP_CharaSelect_C::Line09' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Line10) == 0x0005C8, "Member 'UWBP_CharaSelect_C::Line10' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Line11) == 0x0005D0, "Member 'UWBP_CharaSelect_C::Line11' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, RenameButton) == 0x0005D8, "Member 'UWBP_CharaSelect_C::RenameButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, RetainerBox_0) == 0x0005E0, "Member 'UWBP_CharaSelect_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, RevivalButton) == 0x0005E8, "Member 'UWBP_CharaSelect_C::RevivalButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, SBButtonLeft) == 0x0005F0, "Member 'UWBP_CharaSelect_C::SBButtonLeft' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, SBButtonRight) == 0x0005F8, "Member 'UWBP_CharaSelect_C::SBButtonRight' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, SBDateTimeTextBlock_DeleteTime) == 0x000600, "Member 'UWBP_CharaSelect_C::SBDateTimeTextBlock_DeleteTime' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, StartBtnText) == 0x000608, "Member 'UWBP_CharaSelect_C::StartBtnText' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, StartBtnText_1) == 0x000610, "Member 'UWBP_CharaSelect_C::StartBtnText_1' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, StartBtnText_2) == 0x000618, "Member 'UWBP_CharaSelect_C::StartBtnText_2' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, StartButton) == 0x000620, "Member 'UWBP_CharaSelect_C::StartButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, UIBlocker) == 0x000628, "Member 'UWBP_CharaSelect_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, VerticalBox_Command) == 0x000630, "Member 'UWBP_CharaSelect_C::VerticalBox_Command' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, VerticalBox_State) == 0x000638, "Member 'UWBP_CharaSelect_C::VerticalBox_State' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, WPB_CharaselectDebugbButton) == 0x000640, "Member 'UWBP_CharaSelect_C::WPB_CharaselectDebugbButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, OnStartWithCharacter) == 0x000648, "Member 'UWBP_CharaSelect_C::OnStartWithCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, OnClose) == 0x000658, "Member 'UWBP_CharaSelect_C::OnClose' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, OnRequestCreateMode) == 0x000668, "Member 'UWBP_CharaSelect_C::OnRequestCreateMode' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, OnStartFriendSession) == 0x000678, "Member 'UWBP_CharaSelect_C::OnStartFriendSession' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharaSeleListItem) == 0x000688, "Member 'UWBP_CharaSelect_C::CharaSeleListItem' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharaInfoList) == 0x000698, "Member 'UWBP_CharaSelect_C::CharaInfoList' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Direction) == 0x0006A8, "Member 'UWBP_CharaSelect_C::Direction' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, IsMove) == 0x0006AC, "Member 'UWBP_CharaSelect_C::IsMove' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CntFrame) == 0x0006B0, "Member 'UWBP_CharaSelect_C::CntFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, beforPos) == 0x0006B8, "Member 'UWBP_CharaSelect_C::beforPos' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, AfterPos) == 0x0006C8, "Member 'UWBP_CharaSelect_C::AfterPos' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, SelectICharandex) == 0x0006D8, "Member 'UWBP_CharaSelect_C::SelectICharandex' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, RoleCharaItem) == 0x0006E0, "Member 'UWBP_CharaSelect_C::RoleCharaItem' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, RoleCharaItemNum) == 0x0006E8, "Member 'UWBP_CharaSelect_C::RoleCharaItemNum' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, MaxLeftPos) == 0x0006EC, "Member 'UWBP_CharaSelect_C::MaxLeftPos' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, MaxRightPos) == 0x0006F4, "Member 'UWBP_CharaSelect_C::MaxRightPos' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, InitPos) == 0x000700, "Member 'UWBP_CharaSelect_C::InitPos' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, beforeMainItem) == 0x000710, "Member 'UWBP_CharaSelect_C::beforeMainItem' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, AfterMainItem) == 0x000718, "Member 'UWBP_CharaSelect_C::AfterMainItem' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, MaxScale) == 0x000720, "Member 'UWBP_CharaSelect_C::MaxScale' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, MinScale) == 0x000728, "Member 'UWBP_CharaSelect_C::MinScale' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, MaxOpacity) == 0x000730, "Member 'UWBP_CharaSelect_C::MaxOpacity' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, MixOpacity) == 0x000734, "Member 'UWBP_CharaSelect_C::MixOpacity' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, MaxCharaOpacity) == 0x000738, "Member 'UWBP_CharaSelect_C::MaxCharaOpacity' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, MinCharaOpacity) == 0x00073C, "Member 'UWBP_CharaSelect_C::MinCharaOpacity' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, AnimDel_out) == 0x000740, "Member 'UWBP_CharaSelect_C::AnimDel_out' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, IsDelChara) == 0x000748, "Member 'UWBP_CharaSelect_C::IsDelChara' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharacterId) == 0x000750, "Member 'UWBP_CharaSelect_C::CharacterId' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, NoizTickCheck) == 0x000760, "Member 'UWBP_CharaSelect_C::NoizTickCheck' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, NoizTickCheckAfterglow) == 0x000764, "Member 'UWBP_CharaSelect_C::NoizTickCheckAfterglow' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CurrentPage) == 0x000768, "Member 'UWBP_CharaSelect_C::CurrentPage' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CaptureStudio) == 0x000770, "Member 'UWBP_CharaSelect_C::CaptureStudio' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CaptureStudioBust) == 0x000780, "Member 'UWBP_CharaSelect_C::CaptureStudioBust' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, MoveSelectBlocker) == 0x000788, "Member 'UWBP_CharaSelect_C::MoveSelectBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CharaCreateParameters) == 0x000790, "Member 'UWBP_CharaSelect_C::CharaCreateParameters' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, StartDelayTime) == 0x0007A0, "Member 'UWBP_CharaSelect_C::StartDelayTime' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, MultiDialog) == 0x0007A8, "Member 'UWBP_CharaSelect_C::MultiDialog' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, SecondPasswordSender) == 0x0007B0, "Member 'UWBP_CharaSelect_C::SecondPasswordSender' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, SecondPasswordExpiredDialog) == 0x0007B8, "Member 'UWBP_CharaSelect_C::SecondPasswordExpiredDialog' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, DeleteDialogFirst) == 0x0007C0, "Member 'UWBP_CharaSelect_C::DeleteDialogFirst' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, DeleteDialogLast) == 0x0007C8, "Member 'UWBP_CharaSelect_C::DeleteDialogLast' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, NameSetting) == 0x0007D0, "Member 'UWBP_CharaSelect_C::NameSetting' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, BanTypeMessage) == 0x0007D8, "Member 'UWBP_CharaSelect_C::BanTypeMessage' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, LastJoinedPartyInfo) == 0x0007F0, "Member 'UWBP_CharaSelect_C::LastJoinedPartyInfo' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, LastJoinedContentInfo) == 0x000810, "Member 'UWBP_CharaSelect_C::LastJoinedContentInfo' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, bTargetReturnDisconnectedParty) == 0x000828, "Member 'UWBP_CharaSelect_C::bTargetReturnDisconnectedParty' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, bReturnDisconnect) == 0x000829, "Member 'UWBP_CharaSelect_C::bReturnDisconnect' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, bRejectToReturnParty) == 0x00082A, "Member 'UWBP_CharaSelect_C::bRejectToReturnParty' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, OnRefresh) == 0x000830, "Member 'UWBP_CharaSelect_C::OnRefresh' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, bDisplayedReturnPartyTimeOver) == 0x000840, "Member 'UWBP_CharaSelect_C::bDisplayedReturnPartyTimeOver' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, IsEnableAllButton) == 0x000841, "Member 'UWBP_CharaSelect_C::IsEnableAllButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, UIBlocker_0) == 0x000848, "Member 'UWBP_CharaSelect_C::UIBlocker_0' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, AddCharacterSlotDialog) == 0x000850, "Member 'UWBP_CharaSelect_C::AddCharacterSlotDialog' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, DeleteBlocker) == 0x000858, "Member 'UWBP_CharaSelect_C::DeleteBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Dialog) == 0x000860, "Member 'UWBP_CharaSelect_C::Dialog' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, CurrentCharacterNotificationCnt) == 0x000868, "Member 'UWBP_CharaSelect_C::CurrentCharacterNotificationCnt' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, Open) == 0x00086C, "Member 'UWBP_CharaSelect_C::Open' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, LevelMapLoad) == 0x00086D, "Member 'UWBP_CharaSelect_C::LevelMapLoad' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_C, RefusedReJoinPartyLogList) == 0x000870, "Member 'UWBP_CharaSelect_C::RefusedReJoinPartyLogList' has a wrong offset!");

}

