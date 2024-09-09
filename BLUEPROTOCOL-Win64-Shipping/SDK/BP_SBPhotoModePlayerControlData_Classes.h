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
	 * BlueprintGeneratedClass BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C
	 * Size -> 0x0009 (FullSize[0x0129] - InheritedSize[0x0120])
	 */
	class UBP_SBPhotoModePlayerControlData_C : public USBPhotoModePlayerControlData
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       ShowWeapon;                                              // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnChangeWeaponVisibility();
		void CreateCloneCharacter(class UObject* InParent, bool bInCopyPose);
		void SetPlayerHidden(bool bIsHidden);
		void BP_CreateCloneCharacter(class UObject* InParent, bool bInCopyPose);
		void BP_OnChangeWeaponVisibility();
		void ExecuteUbergraph_BP_SBPhotoModePlayerControlData(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
