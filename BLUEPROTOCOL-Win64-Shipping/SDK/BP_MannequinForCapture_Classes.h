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
	 * BlueprintGeneratedClass BP_MannequinForCapture.BP_MannequinForCapture_C
	 * Size -> 0x007A (FullSize[0x152A] - InheritedSize[0x14B0])
	 */
	class ABP_MannequinForCapture_C : public ASBCharaCreateCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x14B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TMap<class FName, ECharaPartsLocation>                     MannequinBodyPartsNameAndLocationList;                   // 0x14B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		ECharaPartsLocation                                        TempCharaPartsLocation;                                  // 0x1508(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TOQL[0x3];                                   // 0x1509(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TempCharaPartsLocationValuesId;                          // 0x150C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TempPartsName;                                           // 0x1510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempPartsColorId;                                        // 0x1518(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempPartsColorSaturation;                                // 0x151C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempPartsColorValue;                                     // 0x1520(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempPartsMaterialId;                                     // 0x1524(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBCharacterGender                                         TempCharaCreateParamGender;                              // 0x1528(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAnimChange;                                            // 0x1529(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateAnimChange(int32_t InCostumeItemId, bool* OutAnimChange);
		void ResetMannequin();
		void UpdateMannequin();
		void ReceiveBeginPlay();
		void SetCostumeToMannequin(int32_t InCostumeItemId, bool IsOwnItem, int32_t InOwnCostumeColorIndex, int32_t InOwnCostumeColorS, int32_t InOwnCostumeColorV, int32_t InOwnCostumeMaterialId);
		void SetMannequinType(bool IsMale);
		void ExecuteUbergraph_BP_MannequinForCapture(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
