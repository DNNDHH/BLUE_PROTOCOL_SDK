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
	 * WidgetBlueprintGeneratedClass BP_Fang_expedition.BP_Fang_expedition_C
	 * Size -> 0x04A3 (FullSize[0x0753] - InheritedSize[0x02B0])
	 */
	class UBP_Fang_expedition_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Detail_Out;                                              // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnmPlayList_InOut;                                       // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnmDetailAreaSelect;                                     // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnmTicketSelect_InOut;                                   // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnmMapIn;                                                // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anm_DungeonListPanel_In;                                 // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnmLight01;                                              // 0x02E8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnmLight02;                                              // 0x02F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnmIn;                                                   // 0x02F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anm_PlayStart;                                           // 0x0300(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Detail_IN;                                               // 0x0308(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnmOut;                                                  // 0x0310(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        AllPanel;                                                // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_ProbabilityList_C*                  AreaItemDetailList;                                      // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        AreaListPanel;                                           // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Arrow_Close;                                             // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Arrow_Open;                                              // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Background;                                              // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BG_Black;                                                // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BG_Black2;                                               // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_NowLoading_C*                                    BP_NowLoading;                                           // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        CmnBack;                                                 // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               DetailAreaListCloseButton;                               // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBackgroundBlur*                                     DetailBGBlur;                                            // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               DetailFullScreenButton;                                  // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        DetailPanel;                                             // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        DetailSelectPanel;                                       // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        DungeonListPanel;                                        // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_AreaList_C*                         Fang_expedition_AreaList;                                // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_AreaListSelectWindow_C*             Fang_expedition_AreaListSelectWindow;                    // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_Detail_C*                           Fang_expedition_Detail;                                  // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_DungeonList_C*                      Fang_expedition_DungeonList;                             // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_FangSelect_C*                       Fang_expedition_FangSelect;                              // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_MapWindow_C*                        Fang_expedition_MapWindow;                               // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_PlayListWindow_C*                   Fang_expedition_PlayListWindow;                          // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_StartAnm_C*                         Fang_expedition_StartAnm;                                // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_StatusWindow_C*                     Fang_expedition_StatusWindow;                            // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_TicketListWindow_C*                 Fang_expedition_TicketListWindow;                        // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        FangSelectPanel;                                         // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconShop;                                                // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LineV02;                                                 // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        LoadingPanel;                                            // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LogoBG;                                                  // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               MapIconListFullScreenButton;                             // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MapPanel;                                                // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Message_Base;                                            // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               PlayListCloseButton;                                     // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PlayListPanel;                                           // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayStartText;                                           // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_1;                                           // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           ScaleBox_127;                                            // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShowTutorialHelpBtn_C*                              ShowTutorialHelpBtn;                                     // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        StartAnimPanel;                                          // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               StartAnimPanelCloseButton;                               // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        TicketSelectPanel;                                       // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               TicketWindowCloseButton;                                 // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Title;                                                   // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_Arrow;                                    // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSceneFinish;                                           // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    SceneType;                                               // 0x04A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectArea;                                              // 0x04A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayListOpen;                                            // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KGN1[0x7];                                   // 0x04A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBFang_expeditionData                              TempExpeditionData;                                      // 0x04B0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		class UBP_Dialog_C*                                        DialogWidget;                                            // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ImmediateType;                                           // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_57JH[0x4];                                   // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TempPlayAreaId;                                          // 0x04F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    TempPlayResultIndex;                                     // 0x0508(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8JHK[0x4];                                   // 0x050C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMailAttachmentsAcceptWindow_C*                      AcceptWindow;                                            // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMailListAttachmentAcceptedResult_C*                 AcceptResult;                                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      SelectFangIdList;                                        // 0x0520(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            TempUseTokenIds;                                         // 0x0530(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSBFang_expeditionAreaData                          TempStartAreaData;                                       // 0x0540(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              TempRewardGetId;                                         // 0x05E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FSBFang_expeditionAreaData                          TempFieldMapData;                                        // 0x05F8(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    TempSelectDungeonSlot;                                   // 0x06A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JBBU[0x4];                                   // 0x06A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TempFieldId;                                             // 0x06A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FSBFang_expeditionIconData                          TempFieldIconGroupData;                                  // 0x06B8(0x0058) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    TempIconListSelectIndex;                                 // 0x0710(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_80Q0[0x4];                                   // 0x0714(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      TempIconAreaIdList;                                      // 0x0718(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    PrevSceneType;                                           // 0x0728(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KYHI[0x4];                                   // 0x072C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnExpeditionDataUpdate;                                  // 0x0730(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       DetailAreaListOpen;                                      // 0x0740(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DatalistGet;                                             // 0x0741(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UIBlockEnable;                                           // 0x0742(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9TWP[0x5];                                   // 0x0743(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProbabilityDisplay_C*                               ProbabilityDisplay;                                      // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTicketAnimeEnd;                                         // 0x0750(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAnimeSkip;                                             // 0x0751(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFinishTicket;                                          // 0x0752(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetLoading(bool Loading);
		void OnItemDetailListClose();
		void MapIconClickWork(const class FString& ID, bool AnimationSkip);
		void ReloadPlayDataDetail();
		void OnPressDungeonListClose();
		void OnDetailAreaListClick(int32_t Index);
		void OnMapIconGroupClick(const struct FSBFang_expeditionIconData& IconData);
		void OnProbabilityListView_PlayData(const struct FSBFang_expeditionPlayData& PlayData);
		void OnListSelect_DungeonArea(int32_t Index, const struct FSBFang_expeditionAreaData& AreaData);
		void OnMapIconClick(const class FString& ID);
		void SetupFieldMap(const class FString& FieldId);
		void GetTokenUseDialogMessage(TArray<int32_t>* TokenIds, class FString* Message);
		void ExpeditionPlayDetailOpen(int32_t Index);
		void FangSelectClose(bool AnimationSkip);
		void DisplayTargetPlayDetail(const class FString& AreaId);
		void ExpeditionStartRequest();
		void OnTokenWindowClose(TArray<int32_t>* TokenList);
		void OnFangListSelectChange(TArray<class FString>* UniqueId);
		void FindPlayData(const class FString& ExpeditionId, struct FSBFang_expeditionPlayData* FindData, bool* Valid);
		void ExpeditionRewardView(const struct FSBFang_expeditionPlayData& PlayData, bool LotterySkip);
		void UpdateExpeditionData();
		void OnComplete_Immediate(bool WasSuccessful, int32_t ErrorCode);
		void FangSelectOpen();
		void OnProbabilityListClose();
		void OnProbabilityListView(const struct FSBFang_expeditionAreaData& AreaData, int32_t TimeIndex, int32_t FangValue);
		void SetPlayListVisibility(bool Visible);
		void OnListSelect_DungeonTicket(int32_t Index);
		void OnListSelect_DungeonStandby(int32_t Index);
		void OnListSelect_DungeonPlay(int32_t Index, const struct FSBFang_expeditionPlayData& PlayData);
		void OnListSelect_Field(const class FString& Field, int32_t Index);
		void OnListSelect_Town(int32_t Index);
		void Initialize();
		void UnBindEvent();
		void BindEvent();
		void RandomPlayAnimation2();
		void RandomPlayAnimation();
		void InitializeAreaListData();
		void VisibilityChange(int32_t Type, bool AnimationSkip);
		void BackButtonPress();
		void AcceptWindow_OnRequesting();
		void AcceptWindow_OnClose();
		void AcceptResultOpen();
		void OnAcceptResultClose();
		void OnComplete_GetReward(bool WasSuccessful, int32_t ErrorCode);
		void OnExpeditionStart_Complete(bool WasSuccessful, int32_t ErrorCode);
		void OnOpenRareRequest_Complete(bool WasSuccessful, int32_t ErrorCode);
		void DungeonSlotAnimationFinish();
		void ImmediateErrorWork(bool WasSuccessful, int32_t ErrorCode);
		void ImmediateErrorDialogWork(EDialogResult Result);
		void ImmediateErrorReload(bool WasSuccessful, int32_t ErrorCode);
		void ExpeditionDataUpdate();
		void DataUpdateWork(bool WasSuccessful, int32_t ErrorCode);
		void OnCheckReward_Complete(bool WasSuccessful, int32_t ErrorCode);
		void OnGetListEnd_1(bool WasSuccessful, int32_t ErrorCode);
		void OnGetListEnd_2(bool WasSuccessful, int32_t ErrorCode);
		void OnGetListEnd_3(bool WasSuccessful, int32_t ErrorCode);
		void ExpeditionCancelButtonWork();
		void CancelDialogSelect(EDialogResult Result);
		void ExpeditionImmediateWork();
		void ImmediateDialogSelect(EDialogResult Result);
		void ExpeditionFinishButtonWork(const class FString& ID);
		void TicketSelectWindowOpen(TArray<int32_t> TokenIds, const struct FSBFang_expeditionAreaData& AreaData);
		void BndEvt__BP_Fang_expedition_TicketWindowCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExpeditionStartButtonWork(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32_t> TokenIds);
		void StartDialogSelect(EDialogResult Result);
		void DetailClose();
		void UseCheckDialogWork();
		void WidgetAnimationEvt_AnmDetailAreaSelect_K2Node_WidgetAnimationEvent_1();
		void WidgetAnimationEvt_AnmTicketSelect_InOut_K2Node_WidgetAnimationEvent_3();
		void WidgetAnimationEvt_Detail_Out_K2Node_WidgetAnimationEvent_2();
		void BndEvt__BP_Fang_expedition_StartAnimPanelCloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void OnPressPlaylistOpenButton();
		void OnPressPlaylistDetailButton(int32_t Index);
		void OnPressPlaylistFinishButton(int32_t Index);
		void OnDungeonOpenTicketDialogSelect(EDialogResult Result);
		void BndEvt__BP_Fang_expedition_PlayListCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void PlayListUpdate(bool WasSuccessful, int32_t ErrorCode);
		void PlayListDetailUpdateWork(bool WasSuccessful);
		void Construct();
		void OnPress_Cancel();
		void SceneFinish();
		void WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_3();
		void onAnimTimer();
		void OnPressBackButton();
		void WidgetAnimationEvt_Anm_PlayStart_K2Node_WidgetAnimationEvent_2();
		void BndEvt__BP_Fang_expedition_MapIconListFullScreenButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_1();
		void BndEvt__BP_Fang_expedition_DetailFullScreenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void Complete_GetRewardBoost(int32_t InRetCode);
		void WidgetAnimationEvt_AnmPlayList_InOut_K2Node_WidgetAnimationEvent_4();
		void Destruct();
		void CustomEvent_1(bool WasSuccessful, int32_t ErrorCode);
		void Event_NotifyCompletionExpedition(class UObject* Sender, class UObject* Param);
		void EventAnimSkip();
		void ExecuteUbergraph_BP_Fang_expedition(int32_t EntryPoint);
		void OnExpeditionDataUpdate__DelegateSignature(bool WasSuccessful);
		void OnSceneFinish__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
