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
	 * WidgetBlueprintGeneratedClass PhotoList.PhotoList_C
	 * Size -> 0x0098 (FullSize[0x0310] - InheritedSize[0x0278])
	 */
	class UPhotoList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCommunicateSettingMenu_Photo_Thumbnail_C*           AdventureCardMenu_Thumbnail_01;                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommunicateSettingMenu_Photo_Thumbnail_C*           AdventureCardMenu_Thumbnail_02;                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommunicateSettingMenu_Photo_Thumbnail_C*           AdventureCardMenu_Thumbnail_03;                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             PhotoButtonClickEvent;                                   // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PhotoButtonCloseEvent;                                   // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UTexture*                                            ThumbnailTexture;                                        // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickedThumbnail;                                      // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsClick_Thumbnail1;                                      // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsClick_Thumbnail2;                                      // 0x02D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsClick_Thumbnail3;                                      // 0x02DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SOZ7[0x5];                                   // 0x02DB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      PhotoModeImageIdList;                                    // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            LikeCountList;                                           // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnClicked_PhotoLikeBtn;                                  // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void LikeCounterChange(const class FString& InPhotoModeImageId, int32_t InLikeCount);
		void Init(bool InIsMe, const class FString& InPlayerId, const class FString& InCharacterId);
		void SetBtnEnable(bool bInIsEnabled);
		void Reset(bool Thumbnail1, bool Thumbnail2, bool Thumbnail3);
		void SetThumbnail(bool IsClick_Thumbnail1, bool IsClick_Thumbnail2, bool IsClick_Thumbnail3);
		void ResetFlag();
		class FString GetThumbnailURL();
		void GetThumbnail3URL(class FString* URL_Thumbnail);
		void GetThumbnail2URL(class FString* URL_Thumbnail);
		void GetThumbnail1URL(class FString* URL_Thumbnail);
		void DownloadThumbnail3(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32_t InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId);
		void DownloadThumbnail2(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32_t InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId);
		void DownloadThumbnail1(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32_t InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId);
		void CloseEvent();
		void Construct();
		void OnClickedThumbnail_2();
		void OnClickedThumbnail_3();
		void OnClickedThumbnail_4();
		void BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature(const class FString& outPhotoModeImageId, int32_t outLikeCount);
		void BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature(const class FString& outPhotoModeImageId, int32_t outLikeCount);
		void BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature(const class FString& outPhotoModeImageId, int32_t outLikeCount);
		void ExecuteUbergraph_PhotoList(int32_t EntryPoint);
		void OnClicked_PhotoLikeBtn__DelegateSignature(TArray<int32_t>* outLikeCountList, TArray<bool>* outLikeBtnEnableList);
		void OnClickedThumbnail__DelegateSignature();
		void PhotoButtonCloseEvent__DelegateSignature();
		void PhotoButtonClickEvent__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
