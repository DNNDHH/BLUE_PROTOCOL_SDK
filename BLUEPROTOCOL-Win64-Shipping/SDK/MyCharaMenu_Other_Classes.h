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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_Other.MyCharaMenu_Other_C
	 * Size -> 0x001C (FullSize[0x02CC] - InheritedSize[0x02B0])
	 */
	class UMyCharaMenu_Other_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        VB_Active;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_NonActive;                                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    ActiveItemCnt;                                           // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPlayerTagPram(const struct FSBMasterNaEvent& SBMasterNaEvent, bool* Active, class FString* BuffRate);
		void UpdatePlayerTag();
		void GetFreeBuffText(ESBFreeBuffPointType Type, class FString* Text, struct FSBStatusAlimentConfig* OutRow);
		void UpdateFreeBuff();
		void FixActiveList();
		void TryGetActiveListItem(class UEffect_Other_C** item);
		class FText GetBuffValue(int32_t BaseValue, bool IsRate, EOutGameBuffType InBuffType);
		void CreateStockOutGameBuff();
		void UpdateActiveNetCafeBuff();
		void UpdateActiveOutGameBuff();
		void Construct();
		void Update();
		void ExecuteUbergraph_MyCharaMenu_Other(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
