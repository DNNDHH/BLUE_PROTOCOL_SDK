#pragma once

 

// Package: TitleMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TitleMenu.TitleMenu_C
// 0x00C8 (0x0358 - 0x0290)
class UTitleMenu_C final : public USBServerSelectWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInFirst;                                       // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                AllowSkip;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BgGrp;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_3;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CharaLayer;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaSelect_C*                     CharaSelect;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_StartMenu_C*                       StartMenu;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_A;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SearchResultsIndex;                                // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsExistsServer;                                   // 0x02F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E73[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCursorStateHandle                   CursorHandle;                                      // 0x02F8(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bFromCharaCreateComplete;                          // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E74[0x3];                                     // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PlayStartCharacterId;                              // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class AActor*                                 EffectActor;                                       // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   BanTypeMessage;                                    // 0x0318(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bReturnDisconnect;                                 // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E75[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           SwapBlocker;                                       // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFirstPlay;                                       // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E76[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_TitleHUD_C*                         TitleHUD;                                          // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTitleMenuCharaLayer*                 CharaLayerWidget;                                  // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TitleMenu(int32 EntryPoint);
	void SetupCharaLayer(class UClass* InSBTitleMenuCharaLayer);
	void LoadCharaLayer();
	void LoadEffectActor();
	void Init();
	void WidgetAnimationEvt_AnimInFirst_K2Node_WidgetAnimationEvent_1();
	void BndEvt__TitleMenu_AllowSkip_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void OperationPossible();
	void OnFinishedDialog(EDialogResult Result);
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void OnComebackCharaCreate();
	void OnFailedConnectServer(int32 RetCode);
	void ResetGameLoadStatus();
	void InitCharaSelect();
	void OnLoginFailure(const int32 InRetCode);
	void BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature(const class FString& CharacterId, int32 ListIndex, const class FString& FriendCharacterId);
	void BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature(const class FString& CharacterId, int32 ListIndex, bool Param_bReturnDisconnect);
	void BndEvt__CharaSelect_K2Node_ComponentBoundEvent_162_OnRequestCreateMode__DelegateSignature();
	void BndEvt__CharaSelect_K2Node_ComponentBoundEvent_235_OnClose__DelegateSignature();
	void Destruct();
	void Construct();
	void SetButtonFocus();
	void BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_382_OnPlayGame__DelegateSignature();
	void BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_395_OnExit__DelegateSignature();
	void InitConfig();
	void BndEvt__StartMenu_K2Node_ComponentBoundEvent_591_OnConfig__DelegateSignature();
	void InitStartMenu();
	void OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72(TSubclassOf<class UObject> Loaded);
	void OnLoaded_E8315409430BF09E1DB899BAE01D7ABD(TSubclassOf<class UObject> Loaded);
	void OnLoaded_136303394FB780B732D94AA171FCCCE2(TSubclassOf<class UObject> Loaded);
	bool HasFromOption(const class FString& CheckString);
	class FString GetNewCharacterId();
	void ClearCache();
	void IsCharaSelectStart(bool* Param_CharaSelect);
	void SetEffectEnable(bool bEnable);
	void GetBanFinishedAt(class FText* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TitleMenu_C">();
	}
	static class UTitleMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTitleMenu_C>();
	}
};
static_assert(alignof(UTitleMenu_C) == 0x000008, "Wrong alignment on UTitleMenu_C");
static_assert(sizeof(UTitleMenu_C) == 0x000358, "Wrong size on UTitleMenu_C");
static_assert(offsetof(UTitleMenu_C, UberGraphFrame) == 0x000290, "Member 'UTitleMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, AnimInFirst) == 0x000298, "Member 'UTitleMenu_C::AnimInFirst' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, AnimOut) == 0x0002A0, "Member 'UTitleMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, AnimIn) == 0x0002A8, "Member 'UTitleMenu_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, AllowSkip) == 0x0002B0, "Member 'UTitleMenu_C::AllowSkip' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, BgGrp) == 0x0002B8, "Member 'UTitleMenu_C::BgGrp' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, CanvasPanel_3) == 0x0002C0, "Member 'UTitleMenu_C::CanvasPanel_3' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, CharaLayer) == 0x0002C8, "Member 'UTitleMenu_C::CharaLayer' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, CharaSelect) == 0x0002D0, "Member 'UTitleMenu_C::CharaSelect' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, StartMenu) == 0x0002D8, "Member 'UTitleMenu_C::StartMenu' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, UIBlocker) == 0x0002E0, "Member 'UTitleMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, UIBlocker_A) == 0x0002E8, "Member 'UTitleMenu_C::UIBlocker_A' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, SearchResultsIndex) == 0x0002F0, "Member 'UTitleMenu_C::SearchResultsIndex' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, bIsExistsServer) == 0x0002F4, "Member 'UTitleMenu_C::bIsExistsServer' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, CursorHandle) == 0x0002F8, "Member 'UTitleMenu_C::CursorHandle' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, bFromCharaCreateComplete) == 0x0002FC, "Member 'UTitleMenu_C::bFromCharaCreateComplete' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, PlayStartCharacterId) == 0x000300, "Member 'UTitleMenu_C::PlayStartCharacterId' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, EffectActor) == 0x000310, "Member 'UTitleMenu_C::EffectActor' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, BanTypeMessage) == 0x000318, "Member 'UTitleMenu_C::BanTypeMessage' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, bReturnDisconnect) == 0x000330, "Member 'UTitleMenu_C::bReturnDisconnect' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, SwapBlocker) == 0x000338, "Member 'UTitleMenu_C::SwapBlocker' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, IsFirstPlay) == 0x000340, "Member 'UTitleMenu_C::IsFirstPlay' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, TitleHUD) == 0x000348, "Member 'UTitleMenu_C::TitleHUD' has a wrong offset!");
static_assert(offsetof(UTitleMenu_C, CharaLayerWidget) == 0x000350, "Member 'UTitleMenu_C::CharaLayerWidget' has a wrong offset!");

}

