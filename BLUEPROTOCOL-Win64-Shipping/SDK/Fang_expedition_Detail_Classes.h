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
	 * WidgetBlueprintGeneratedClass Fang_expedition_Detail.Fang_expedition_Detail_C
	 * Size -> 0x0210 (FullSize[0x0488] - InheritedSize[0x0278])
	 */
	class UFang_expedition_Detail_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anm_LineEff;                                             // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BG_Black;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     DetailSwitcher;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_DetailAreaName_C*                   Fang_expedition_DetailAreaName;                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_DetailHeader_C*                     Fang_expedition_DetailHeader;                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HLine_2;                                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      LimitCountBox;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        LimitStatusPanel;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      LimitTimeBox;                                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Line;                                                    // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Line_Eff;                                                // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            MouseBlock;                                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBDateTimeTextBlock*                                SBDateTimeTextBlock_Limit;                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_Header;                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_DetailPlayData_C*                   SelectImajin_Play_Finish;                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_DetailItemData_C*                   Standby;                                                 // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_90;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FLinearColor>                                AreaNameBGColor_L;                                       // 0x0308(0x0010) Edit, BlueprintVisible
		TArray<struct FLinearColor>                                AreaNameBGColor_R;                                       // 0x0318(0x0010) Edit, BlueprintVisible
		int32_t                                                    ViewType;                                                // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPreview;                                               // 0x032C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WFZK[0x3];                                   // 0x032D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClickRandomRewardListView;                             // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              PlayAreaId;                                              // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickExpeditionCancel;                                 // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickUseTicket;                                        // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickExpeditionFinish;                                 // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickFangSelect;                                       // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickTokenWindowOpen;                                  // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickExpeditionStart;                                  // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickCloseButton;                                      // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USBTextTableAsset*                                   TextTable_Fang;                                          // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBTextTableAsset*                                   TextTable_common;                                        // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickRandomRewardListView_PlayData;                    // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSBFang_expeditionAreaData                          FangAreaData;                                            // 0x03E0(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetFastFinish();
		void SetCloseBtnVisible(bool Visible);
		void UpdateRandomRewardData(struct FSBFang_expeditionPlayData* PlayData);
		void AreaListOpenButtonVisibility(bool Visible);
		void ResetFangData();
		void GetSelectedTimeIndex(int32_t* Index);
		void SetSelectTokenData(TArray<int32_t>* TokenList);
		void SetFangSelectMode(bool SelectMode);
		void GetSelectedAreaData(struct FSBFang_expeditionAreaData* Data);
		void SetSelectFangData(TArray<class FString>* UniqueIds);
		void GetPlayAreaId(class FString* ID);
		void UnbindFunction();
		void BindFunction();
		void SetPlayData(const struct FSBFang_expeditionPlayData& PlayData, int32_t CancelCount);
		void SetAreaData(const struct FSBFang_expeditionAreaData& AreaData, bool ButtonDisable);
		void SetViewType(int32_t Type);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void CB_OnClickRandomRewardView(const struct FSBFang_expeditionAreaData& AreaData, int32_t TimeIndex, int32_t FangValue);
		void Destruct();
		void CB_OnClickExpeditionCancel();
		void CB_OnClickUseTicket();
		void CB_OnClickExpeditionFinish(const class FString& ID);
		void CB_OnClickFangSelectOpen();
		void CB_OnTokenWindowOpen(TArray<int32_t>* SelectTokenIds);
		void CB_OnExpeditionStart(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32_t>* TokenData);
		void CB_OnClickCloseButton();
		void CB_OnClickRandomRewardView_PlayData(const struct FSBFang_expeditionPlayData& PlayData);
		void ExecuteUbergraph_Fang_expedition_Detail(int32_t EntryPoint);
		void OnClickRandomRewardListView_PlayData__DelegateSignature(const struct FSBFang_expeditionPlayData& PlayData);
		void OnClickCloseButton__DelegateSignature();
		void OnClickExpeditionStart__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32_t>* TokenIds);
		void OnClickTokenWindowOpen__DelegateSignature(TArray<int32_t>* TokenIds, const struct FSBFang_expeditionAreaData& AreaData);
		void OnClickFangSelect__DelegateSignature();
		void OnClickExpeditionFinish__DelegateSignature(const class FString& ID);
		void OnClickUseTicket__DelegateSignature();
		void OnClickExpeditionCancel__DelegateSignature();
		void OnClickRandomRewardListView__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, int32_t TimeIndex, int32_t FangValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
