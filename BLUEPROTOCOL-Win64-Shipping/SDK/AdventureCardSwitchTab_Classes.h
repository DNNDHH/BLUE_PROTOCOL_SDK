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
	 * WidgetBlueprintGeneratedClass AdventureCardSwitchTab.AdventureCardSwitchTab_C
	 * Size -> 0x00E0 (FullSize[0x0358] - InheritedSize[0x0278])
	 */
	class UAdventureCardSwitchTab_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Camera;                                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Costume;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem3_C*                            CostumeButton;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEquipList_C*                                        EquipList;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MilitaryRecord;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem3_C*                            MilitaryRecordButton;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMilitaryRecordList_C*                               MilitaryRecordList;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem3_C*                            PhotoButton;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPhotoList_C*                                        PhotoList;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Weapon;                                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem3_C*                            WeaponButton;                                            // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWeaponList_C*                                       WeaponList_113;                                          // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_65;                                       // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_127;                                      // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPhotoButtonClickEvent;                                 // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPhotoButtonCloseEvent;                                 // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedThumbnail;                                      // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickSubButtonEvent;                                   // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsMyProfile;                                             // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_3J7J[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClickedEquipList;                                      // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCliked_PhotoLikeBtn;                                   // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetOtherPCEquipData(const struct FPlayerProfileMenuDetailData& InData);
		void SetMilitaryRecordList(TArray<struct FMilitaryRecordData>* InMilitaryRecordList, bool InIsMilitalyRecordOpen);
		void Init(bool InIsMe, const class FString& InPlayerId, const class FString& InCharacterId);
		void SetPhotoBtnEnable(bool bInIsEnabled);
		void SetUserPhoto3(float InScale, const struct FVector2D& InPosition, const class FString& URL, int32_t InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId);
		void SetUserPhoto2(float InScale, const struct FVector2D& InPosition, const class FString& URL, int32_t InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId);
		void SetUserPhoto1(float InScale, const struct FVector2D& InPosition, const class FString& URL, int32_t InLikeCount, bool InIsEnableLikeCount, const class FString& InPhotoModeImageId);
		void Reset(bool Thumbnail1, bool Thumbnail2, bool Thumbnail3);
		void SetButtonSelected(bool OnPhotoButton, bool OnCostumeButton, bool OnWeaponButton, bool OnMilitaryRecordButton);
		bool IsActivePhoto();
		void ResetFlag();
		void SetPhotoListData(TArray<struct FPlayerProfilePhotoTrimmingInfo>* PhotoTrimmingInfoList);
		void SetEquipListData(bool InToolTipsEnable, const struct FOwnItemInfo& InMountImagine);
		void GetThumbnailTexture(class FString* URL_Thumbnail);
		void Construct();
		void PhotoButtonClick_Event();
		void PhotoButtonClose_Event();
		void OnClickedThumbnail_Event();
		void BndEvt__AdventureCardSwitchTab_PhotoButton_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
		void BndEvt__AdventureCardSwitchTab_CostumeButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature();
		void BndEvt__AdventureCardSwitchTab_WeaponButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature();
		void BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature(int32_t OutItemId, const class FString& outUniqueId);
		void BndEvt__AdventureCardSwitchTab_MilitalyRecordButton_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature();
		void BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature(TArray<int32_t>* outLikeCountList, TArray<bool>* outLikeBtnEnableList);
		void ExecuteUbergraph_AdventureCardSwitchTab(int32_t EntryPoint);
		void OnCliked_PhotoLikeBtn__DelegateSignature(TArray<int32_t>* outLikeCountList, TArray<bool>* outLikeBtnEnableList);
		void OnClickedEquipList__DelegateSignature(int32_t OutItemId, const class FString& outUniqueId);
		void OnClickSubButtonEvent__DelegateSignature();
		void OnClickedThumbnail__DelegateSignature();
		void OnPhotoButtonCloseEvent__DelegateSignature();
		void OnPhotoButtonClickEvent__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
