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
	 * WidgetBlueprintGeneratedClass TitleMenu.TitleMenu_C
	 * Size -> 0x00C9 (FullSize[0x0359] - InheritedSize[0x0290])
	 */
	class UTitleMenu_C : public USBServerSelectWindow
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimInFirst;                                             // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             AllowSkip;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        BgGrp;                                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_4;                                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        CharaLayer;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_CharaSelect_C*                                  CharaSelect;                                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_StartMenu_C*                                    StartMenu;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_A;                                             // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SearchResultsIndex;                                      // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsExistsServer;                                         // 0x02F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DS78[0x3];                                   // 0x02F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBCursorStateHandle                                CursorHandle;                                            // 0x02F8(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bFromCharaCreateComplete;                                // 0x02FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QD94[0x3];                                   // 0x02FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayStartCharacterId;                                    // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class AActor*                                              EffectActor;                                             // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                BanTypeMessage;                                          // 0x0318(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bReturnDisconnect;                                       // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6VZL[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUIBlocker_C*                                        SwapBlocker;                                             // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFirstPlay;                                             // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PJYC[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_TitleHUD_C*                                      TitleHUD;                                                // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBTitleMenuCharaLayer*                              CharaLayerWidget;                                        // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsOptionFirstOpenKeyConfig;                              // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetBanFinishedAt(class FText* Result);
		void SetEffectEnable(bool bEnable);
		void IsCharaSelectStart(bool* CharaSelect);
		void ClearCache();
		class FString GetNewCharacterId();
		bool HasFromOption(const class FString& CheckString);
		void OnLoaded_136303394FB780B732D94AA171FCCCE2(class UClass* Loaded);
		void OnLoaded_E8315409430BF09E1DB899BAE01D7ABD(class UClass* Loaded);
		void OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72(class UClass* Loaded);
		void BndEvt__StartMenu_K2Node_ComponentBoundEvent_591_OnConfig__DelegateSignature();
		void InitConfig();
		void InitStartMenu();
		void BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_395_OnExit__DelegateSignature();
		void BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_382_OnPlayGame__DelegateSignature();
		void SetButtonFocus();
		void OnInitializeOption_Selected(EDialogResult Result);
		void OnReOpenOption(EDialogResult Result);
		void OpenOptionKeyConfig();
		void Construct();
		void Destruct();
		void BndEvt__CharaSelect_K2Node_ComponentBoundEvent_235_OnClose__DelegateSignature();
		void BndEvt__CharaSelect_K2Node_ComponentBoundEvent_162_OnRequestCreateMode__DelegateSignature();
		void BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature(const class FString& CharacterId, int32_t listIndex, bool bReturnDisconnect);
		void BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature(const class FString& CharacterId, int32_t listIndex, const class FString& FriendCharacterId);
		void OnLoginFailure(int32_t InRetCode);
		void InitCharaSelect();
		void ResetGameLoadStatus();
		void OnFailedConnectServer(int32_t RetCode);
		void OnComebackCharaCreate();
		void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1();
		void OnFinishedDialog(EDialogResult Result);
		void OperationPossible();
		void BndEvt__TitleMenu_AllowSkip_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void WidgetAnimationEvt_AnimInFirst_K2Node_WidgetAnimationEvent_2();
		void Init();
		void LoadEffectActor();
		void LoadCharaLayer();
		void SetupCharaLayer(class UClass* InSBTitleMenuCharaLayer);
		void ExecuteUbergraph_TitleMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
