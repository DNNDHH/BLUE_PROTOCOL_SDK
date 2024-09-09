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
	 * BlueprintGeneratedClass BP_EnemySpawner.BP_EnemySpawner_C
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class ABP_EnemySpawner_C : public ASBEnemySpawner
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
