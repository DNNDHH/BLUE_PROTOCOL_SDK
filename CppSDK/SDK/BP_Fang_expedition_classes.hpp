#pragma once

 

// Package: BP_Fang_expedition

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Fang_expedition.BP_Fang_expedition_C
// 0x04A8 (0x0758 - 0x02B0)
class UBP_Fang_expedition_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Detail_Out;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmPlayList_InOut;                                 // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmDetailAreaSelect;                               // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmTicketSelect_InOut;                             // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmMapIn;                                          // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_DungeonListPanel_In;                           // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmLight01;                                        // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmLight02;                                        // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmIn;                                             // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_PlayStart;                                     // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Detail_IN;                                         // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmOut;                                            // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           AllPanel;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_ProbabilityList_C*     AreaItemDetailList;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           AreaListPanel;                                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_Close;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_Open;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Background;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Black;                                          // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Black2;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_NowLoading_C*                       BP_NowLoading;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  DetailAreaListCloseButton;                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        DetailBGBlur;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  DetailFullScreenButton;                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DetailPanel;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DetailSelectPanel;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DungeonListPanel;                                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaList_C*            Fang_expedition_AreaList;                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaListSelectWindow_C* Fang_expedition_AreaListSelectWindow;              // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_Detail_C*              Fang_expedition_Detail;                            // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DungeonList_C*         Fang_expedition_DungeonList;                       // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_FangSelect_C*          Fang_expedition_FangSelect;                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_MapWindow_C*           Fang_expedition_MapWindow;                         // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_PlayListWindow_C*      Fang_expedition_PlayListWindow;                    // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_StartAnm_C*            Fang_expedition_StartAnm;                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_StatusWindow_C*        Fang_expedition_StatusWindow;                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_TicketListWindow_C*    Fang_expedition_TicketListWindow;                  // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           FangSelectPanel;                                   // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconShop;                                          // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineV02;                                           // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           LoadingPanel;                                      // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LogoBG;                                            // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  MapIconListFullScreenButton;                       // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MapPanel;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Message_Base;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  PlayListCloseButton;                               // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PlayListPanel;                                     // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayStartText;                                     // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_126;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowTutorialHelpBtn_C*                 ShowTutorialHelpBtn;                               // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           StartAnimPanel;                                    // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  StartAnimPanelCloseButton;                         // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TicketSelectPanel;                                 // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  TicketWindowCloseButton;                           // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title;                                             // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Arrow;                              // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSceneFinish;                                     // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SceneType;                                         // 0x04A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectArea;                                        // 0x04A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayListOpen;                                      // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65AA[0x7];                                     // 0x04A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionData                 TempExpeditionData;                                // 0x04B0(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_Dialog_C*                           DialogWidget;                                      // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ImmediateType;                                     // 0x04F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65AB[0x4];                                     // 0x04F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TempPlayAreaId;                                    // 0x04F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         TempPlayResultIndex;                               // 0x0508(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65AC[0x4];                                     // 0x050C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMailAttachmentsAcceptWindow_C*         AcceptWindow;                                      // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMailListAttachmentAcceptedResult_C*    AcceptResult;                                      // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         SelectFangIdList;                                  // 0x0520(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 TempUseTokenIds;                                   // 0x0530(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBFang_expeditionAreaData             TempStartAreaData;                                 // 0x0540(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 TempRewardGetId;                                   // 0x05E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSBFang_expeditionAreaData             TempFieldMapData;                                  // 0x05F8(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         TempSelectDungeonSlot;                             // 0x06A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65AD[0x4];                                     // 0x06A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TempFieldId;                                       // 0x06A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSBFang_expeditionIconData             TempFieldIconGroupData;                            // 0x06B8(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         TempIconListSelectIndex;                           // 0x0710(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65AE[0x4];                                     // 0x0714(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         TempIconAreaIdList;                                // 0x0718(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         PrevSceneType;                                     // 0x0728(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65AF[0x4];                                     // 0x072C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnExpeditionDataUpdate;                            // 0x0730(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          DetailAreaListOpen;                                // 0x0740(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DatalistGet;                                       // 0x0741(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UIBlockEnable;                                     // 0x0742(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65B0[0x5];                                     // 0x0743(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UProbabilityDisplay_C*                  ProbabilityDisplay;                                // 0x0748(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTicketAnimeEnd;                                   // 0x0750(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAnimeSkip;                                       // 0x0751(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFinishTicket;                                    // 0x0752(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSceneFinish__DelegateSignature();
	void OnExpeditionDataUpdate__DelegateSignature(bool WasSuccessful);
	void ExecuteUbergraph_BP_Fang_expedition(int32 EntryPoint);
	void EventAnimSkip();
	void Event_NotifyCompletionExpedition(class UObject* Sender, class UObject* Param);
	void CustomEvent_0(bool WasSuccessful, int32 ErrorCode);
	void Destruct();
	void WidgetAnimationEvt_AnmPlayList_InOut_K2Node_WidgetAnimationEvent_3();
	void Complete_GetRewardBoost(int32 InRetCode);
	void BndEvt__BP_Fang_expedition_DetailFullScreenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_0();
	void BndEvt__BP_Fang_expedition_MapIconListFullScreenButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void WidgetAnimationEvt_Anm_PlayStart_K2Node_WidgetAnimationEvent_1();
	void OnPressBackButton();
	void OnAnimTimer();
	void WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_2();
	void SceneFinish();
	void OnPress_Cancel();
	void Construct();
	void PlayListDetailUpdateWork(bool WasSuccessful);
	void PlayListUpdate(bool WasSuccessful, int32 ErrorCode);
	void BndEvt__BP_Fang_expedition_PlayListCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnDungeonOpenTicketDialogSelect(EDialogResult Result);
	void OnPressPlaylistFinishButton(int32 Param_Index);
	void OnPressPlaylistDetailButton(int32 Param_Index);
	void OnPressPlaylistOpenButton();
	void BndEvt__BP_Fang_expedition_StartAnimPanelCloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void WidgetAnimationEvt_Detail_Out_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_AnmTicketSelect_InOut_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_AnmDetailAreaSelect_K2Node_WidgetAnimationEvent_0();
	void UseCheckDialogWork();
	void DetailClose();
	void StartDialogSelect(EDialogResult Result);
	void ExpeditionStartButtonWork(const struct FSBFang_expeditionAreaData& AreaData, const TArray<int32>& TokenIds);
	void BndEvt__BP_Fang_expedition_TicketWindowCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void TicketSelectWindowOpen(const TArray<int32>& TokenIds, const struct FSBFang_expeditionAreaData& AreaData);
	void ExpeditionFinishButtonWork(const class FString& ID);
	void ImmediateDialogSelect(EDialogResult Result);
	void ExpeditionImmediateWork();
	void CancelDialogSelect(EDialogResult Result);
	void ExpeditionCancelButtonWork();
	void OnCheckReward_Complete(bool WasSuccessful, int32 ErrorCode);
	void DataUpdateWork(bool WasSuccessful, int32 ErrorCode);
	void ExpeditionDataUpdate();
	void ImmediateErrorReload(bool WasSuccessful, int32 ErrorCode);
	void ImmediateErrorDialogWork(EDialogResult Result);
	void ImmediateErrorWork(bool WasSuccessful, int32 ErrorCode);
	void DungeonSlotAnimationFinish();
	void OnOpenRareRequest_Complete(bool WasSuccessful, int32 ErrorCode);
	void OnExpeditionStart_Complete(bool WasSuccessful, int32 ErrorCode);
	void OnComplete_GetReward(bool WasSuccessful, int32 ErrorCode);
	void OnAcceptResultClose();
	void AcceptResultOpen();
	void AcceptWindow_OnClose();
	void AcceptWindow_OnRequesting();
	void BackButtonPress();
	void VisibilityChange(int32 Type, bool AnimationSkip);
	void InitializeAreaListData();
	void RandomPlayAnimation();
	void RandomPlayAnimation2();
	void BindEvent();
	void UnBindEvent();
	void Initialize();
	void OnListSelect_Town(int32 Param_Index);
	void OnListSelect_Field(const class FString& Field, int32 Param_Index);
	void OnListSelect_DungeonPlay(int32 Param_Index, const struct FSBFang_expeditionPlayData& PlayData);
	void OnListSelect_DungeonStandby(int32 Param_Index);
	void OnListSelect_DungeonTicket(int32 Param_Index);
	void SetPlayListVisibility(bool Visible);
	void OnProbabilityListView(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangValue);
	void OnProbabilityListClose();
	void FangSelectOpen();
	void OnComplete_Immediate(bool WasSuccessful, int32 ErrorCode);
	void UpdateExpeditionData();
	void ExpeditionRewardView(const struct FSBFang_expeditionPlayData& PlayData, bool LotterySkip);
	void FindPlayData(const class FString& ExpeditionId, struct FSBFang_expeditionPlayData* FindData, bool* Valid);
	void OnFangListSelectChange(TArray<class FString>& UniqueId);
	void OnTokenWindowClose(TArray<int32>& TokenList);
	void ExpeditionStartRequest();
	void DisplayTargetPlayDetail(const class FString& AreaId);
	void FangSelectClose(bool AnimationSkip);
	void ExpeditionPlayDetailOpen(int32 Param_Index);
	void GetTokenUseDialogMessage(TArray<int32>& TokenIds, class FString* Message);
	void SetupFieldMap(const class FString& FieldId);
	void OnMapIconClick(const class FString& ID);
	void OnListSelect_DungeonArea(int32 Param_Index, const struct FSBFang_expeditionAreaData& AreaData);
	void OnProbabilityListView_PlayData(const struct FSBFang_expeditionPlayData& PlayData);
	void OnMapIconGroupClick(const struct FSBFang_expeditionIconData& IconData);
	void OnDetailAreaListClick(int32 Param_Index);
	void OnPressDungeonListClose();
	void ReloadPlayDataDetail();
	void MapIconClickWork(const class FString& ID, bool AnimationSkip);
	void OnItemDetailListClose();
	void SetLoading(bool Loading);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Fang_expedition_C">();
	}
	static class UBP_Fang_expedition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Fang_expedition_C>();
	}
};
static_assert(alignof(UBP_Fang_expedition_C) == 0x000008, "Wrong alignment on UBP_Fang_expedition_C");
static_assert(sizeof(UBP_Fang_expedition_C) == 0x000758, "Wrong size on UBP_Fang_expedition_C");
static_assert(offsetof(UBP_Fang_expedition_C, UberGraphFrame) == 0x0002B0, "Member 'UBP_Fang_expedition_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Detail_Out) == 0x0002B8, "Member 'UBP_Fang_expedition_C::Detail_Out' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, AnmPlayList_InOut) == 0x0002C0, "Member 'UBP_Fang_expedition_C::AnmPlayList_InOut' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, AnmDetailAreaSelect) == 0x0002C8, "Member 'UBP_Fang_expedition_C::AnmDetailAreaSelect' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, AnmTicketSelect_InOut) == 0x0002D0, "Member 'UBP_Fang_expedition_C::AnmTicketSelect_InOut' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, AnmMapIn) == 0x0002D8, "Member 'UBP_Fang_expedition_C::AnmMapIn' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Anm_DungeonListPanel_In) == 0x0002E0, "Member 'UBP_Fang_expedition_C::Anm_DungeonListPanel_In' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, AnmLight01) == 0x0002E8, "Member 'UBP_Fang_expedition_C::AnmLight01' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, AnmLight02) == 0x0002F0, "Member 'UBP_Fang_expedition_C::AnmLight02' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, AnmIn) == 0x0002F8, "Member 'UBP_Fang_expedition_C::AnmIn' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Anm_PlayStart) == 0x000300, "Member 'UBP_Fang_expedition_C::Anm_PlayStart' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Detail_IN) == 0x000308, "Member 'UBP_Fang_expedition_C::Detail_IN' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, AnmOut) == 0x000310, "Member 'UBP_Fang_expedition_C::AnmOut' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, AllPanel) == 0x000318, "Member 'UBP_Fang_expedition_C::AllPanel' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, AreaItemDetailList) == 0x000320, "Member 'UBP_Fang_expedition_C::AreaItemDetailList' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, AreaListPanel) == 0x000328, "Member 'UBP_Fang_expedition_C::AreaListPanel' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Arrow_Close) == 0x000330, "Member 'UBP_Fang_expedition_C::Arrow_Close' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Arrow_Open) == 0x000338, "Member 'UBP_Fang_expedition_C::Arrow_Open' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Background) == 0x000340, "Member 'UBP_Fang_expedition_C::Background' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, BG_Black) == 0x000348, "Member 'UBP_Fang_expedition_C::BG_Black' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, BG_Black2) == 0x000350, "Member 'UBP_Fang_expedition_C::BG_Black2' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, BP_NowLoading) == 0x000358, "Member 'UBP_Fang_expedition_C::BP_NowLoading' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, CmnBack) == 0x000360, "Member 'UBP_Fang_expedition_C::CmnBack' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, DetailAreaListCloseButton) == 0x000368, "Member 'UBP_Fang_expedition_C::DetailAreaListCloseButton' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, DetailBGBlur) == 0x000370, "Member 'UBP_Fang_expedition_C::DetailBGBlur' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, DetailFullScreenButton) == 0x000378, "Member 'UBP_Fang_expedition_C::DetailFullScreenButton' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, DetailPanel) == 0x000380, "Member 'UBP_Fang_expedition_C::DetailPanel' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, DetailSelectPanel) == 0x000388, "Member 'UBP_Fang_expedition_C::DetailSelectPanel' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, DungeonListPanel) == 0x000390, "Member 'UBP_Fang_expedition_C::DungeonListPanel' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Fang_expedition_AreaList) == 0x000398, "Member 'UBP_Fang_expedition_C::Fang_expedition_AreaList' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Fang_expedition_AreaListSelectWindow) == 0x0003A0, "Member 'UBP_Fang_expedition_C::Fang_expedition_AreaListSelectWindow' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Fang_expedition_Detail) == 0x0003A8, "Member 'UBP_Fang_expedition_C::Fang_expedition_Detail' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Fang_expedition_DungeonList) == 0x0003B0, "Member 'UBP_Fang_expedition_C::Fang_expedition_DungeonList' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Fang_expedition_FangSelect) == 0x0003B8, "Member 'UBP_Fang_expedition_C::Fang_expedition_FangSelect' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Fang_expedition_MapWindow) == 0x0003C0, "Member 'UBP_Fang_expedition_C::Fang_expedition_MapWindow' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Fang_expedition_PlayListWindow) == 0x0003C8, "Member 'UBP_Fang_expedition_C::Fang_expedition_PlayListWindow' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Fang_expedition_StartAnm) == 0x0003D0, "Member 'UBP_Fang_expedition_C::Fang_expedition_StartAnm' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Fang_expedition_StatusWindow) == 0x0003D8, "Member 'UBP_Fang_expedition_C::Fang_expedition_StatusWindow' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Fang_expedition_TicketListWindow) == 0x0003E0, "Member 'UBP_Fang_expedition_C::Fang_expedition_TicketListWindow' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, FangSelectPanel) == 0x0003E8, "Member 'UBP_Fang_expedition_C::FangSelectPanel' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, IconShop) == 0x0003F0, "Member 'UBP_Fang_expedition_C::IconShop' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, LineV02) == 0x0003F8, "Member 'UBP_Fang_expedition_C::LineV02' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, LoadingPanel) == 0x000400, "Member 'UBP_Fang_expedition_C::LoadingPanel' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, LogoBG) == 0x000408, "Member 'UBP_Fang_expedition_C::LogoBG' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, MapIconListFullScreenButton) == 0x000410, "Member 'UBP_Fang_expedition_C::MapIconListFullScreenButton' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, MapPanel) == 0x000418, "Member 'UBP_Fang_expedition_C::MapPanel' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Message_Base) == 0x000420, "Member 'UBP_Fang_expedition_C::Message_Base' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, PlayListCloseButton) == 0x000428, "Member 'UBP_Fang_expedition_C::PlayListCloseButton' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, PlayListPanel) == 0x000430, "Member 'UBP_Fang_expedition_C::PlayListPanel' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, PlayStartText) == 0x000438, "Member 'UBP_Fang_expedition_C::PlayStartText' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, RetainerBox_0) == 0x000440, "Member 'UBP_Fang_expedition_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, ScaleBox_126) == 0x000448, "Member 'UBP_Fang_expedition_C::ScaleBox_126' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, ShowTutorialHelpBtn) == 0x000450, "Member 'UBP_Fang_expedition_C::ShowTutorialHelpBtn' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, StartAnimPanel) == 0x000458, "Member 'UBP_Fang_expedition_C::StartAnimPanel' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, StartAnimPanelCloseButton) == 0x000460, "Member 'UBP_Fang_expedition_C::StartAnimPanelCloseButton' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, TicketSelectPanel) == 0x000468, "Member 'UBP_Fang_expedition_C::TicketSelectPanel' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, TicketWindowCloseButton) == 0x000470, "Member 'UBP_Fang_expedition_C::TicketWindowCloseButton' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, Title) == 0x000478, "Member 'UBP_Fang_expedition_C::Title' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, UIBlocker) == 0x000480, "Member 'UBP_Fang_expedition_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, WidgetSwitcher_Arrow) == 0x000488, "Member 'UBP_Fang_expedition_C::WidgetSwitcher_Arrow' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, OnSceneFinish) == 0x000490, "Member 'UBP_Fang_expedition_C::OnSceneFinish' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, SceneType) == 0x0004A0, "Member 'UBP_Fang_expedition_C::SceneType' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, SelectArea) == 0x0004A4, "Member 'UBP_Fang_expedition_C::SelectArea' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, PlayListOpen) == 0x0004A8, "Member 'UBP_Fang_expedition_C::PlayListOpen' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, TempExpeditionData) == 0x0004B0, "Member 'UBP_Fang_expedition_C::TempExpeditionData' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, DialogWidget) == 0x0004E8, "Member 'UBP_Fang_expedition_C::DialogWidget' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, ImmediateType) == 0x0004F0, "Member 'UBP_Fang_expedition_C::ImmediateType' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, TempPlayAreaId) == 0x0004F8, "Member 'UBP_Fang_expedition_C::TempPlayAreaId' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, TempPlayResultIndex) == 0x000508, "Member 'UBP_Fang_expedition_C::TempPlayResultIndex' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, AcceptWindow) == 0x000510, "Member 'UBP_Fang_expedition_C::AcceptWindow' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, AcceptResult) == 0x000518, "Member 'UBP_Fang_expedition_C::AcceptResult' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, SelectFangIdList) == 0x000520, "Member 'UBP_Fang_expedition_C::SelectFangIdList' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, TempUseTokenIds) == 0x000530, "Member 'UBP_Fang_expedition_C::TempUseTokenIds' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, TempStartAreaData) == 0x000540, "Member 'UBP_Fang_expedition_C::TempStartAreaData' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, TempRewardGetId) == 0x0005E8, "Member 'UBP_Fang_expedition_C::TempRewardGetId' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, TempFieldMapData) == 0x0005F8, "Member 'UBP_Fang_expedition_C::TempFieldMapData' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, TempSelectDungeonSlot) == 0x0006A0, "Member 'UBP_Fang_expedition_C::TempSelectDungeonSlot' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, TempFieldId) == 0x0006A8, "Member 'UBP_Fang_expedition_C::TempFieldId' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, TempFieldIconGroupData) == 0x0006B8, "Member 'UBP_Fang_expedition_C::TempFieldIconGroupData' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, TempIconListSelectIndex) == 0x000710, "Member 'UBP_Fang_expedition_C::TempIconListSelectIndex' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, TempIconAreaIdList) == 0x000718, "Member 'UBP_Fang_expedition_C::TempIconAreaIdList' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, PrevSceneType) == 0x000728, "Member 'UBP_Fang_expedition_C::PrevSceneType' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, OnExpeditionDataUpdate) == 0x000730, "Member 'UBP_Fang_expedition_C::OnExpeditionDataUpdate' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, DetailAreaListOpen) == 0x000740, "Member 'UBP_Fang_expedition_C::DetailAreaListOpen' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, DatalistGet) == 0x000741, "Member 'UBP_Fang_expedition_C::DatalistGet' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, UIBlockEnable) == 0x000742, "Member 'UBP_Fang_expedition_C::UIBlockEnable' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, ProbabilityDisplay) == 0x000748, "Member 'UBP_Fang_expedition_C::ProbabilityDisplay' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, bTicketAnimeEnd) == 0x000750, "Member 'UBP_Fang_expedition_C::bTicketAnimeEnd' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, IsAnimeSkip) == 0x000751, "Member 'UBP_Fang_expedition_C::IsAnimeSkip' has a wrong offset!");
static_assert(offsetof(UBP_Fang_expedition_C, IsFinishTicket) == 0x000752, "Member 'UBP_Fang_expedition_C::IsFinishTicket' has a wrong offset!");

}

