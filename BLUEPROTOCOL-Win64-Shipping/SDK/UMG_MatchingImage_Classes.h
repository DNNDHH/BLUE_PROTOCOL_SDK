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
	 * WidgetBlueprintGeneratedClass UMG_MatchingImage.UMG_MatchingImage_C
	 * Size -> 0x0070 (FullSize[0x02E8] - InheritedSize[0x0278])
	 */
	class UUMG_MatchingImage_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             BorderImage;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingImage_BestScore_C*                      UMG_MatchingImage_BestScore;                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingImage_RecommendedBattleScore_C*         UMG_MatchingImage_RecommendedBattleScore;                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              NowLoadTexture[0x28];                                    // 0x0298(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              WaitLoadTexture[0x28];                                   // 0x02C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void SetGameContentId2(const struct FSBMapInfo& HelpModeInfo);
		void SetBestScore(int32_t Record, int32_t ClearCount, ESBClassType ClassType, const class FName& MapId);
		void SetGameContentID(const class FName& GameContentId);
		void OnLoaded_119447794C1BA6C029376DAB31003374(class UObject* Loaded);
		void UIImageAssetLoad();
		void UIIMageAssetLoadCheck();
		void ExecuteUbergraph_UMG_MatchingImage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
