#!/system/bin/sh
# SPECTRUM & FRANCO KERNEL MANAGERS
# Profile initialization by Zile995

# helper functions to allow Android init like script
function write() {
    echo -n $2 > $1
}

#Core-A53
echo endurance > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
echo 691200 > /sys/devices/system/cpu/cpu0/cpufreq/scaling_min_freq
echo 1401600 > /sys/devices/system/cpu/cpu0/cpufreq/scaling_max_freq
#Core-A72
echo endurance > /sys/devices/system/cpu/cpu4/cpufreq/scaling_governor
echo 998400 > /sys/devices/system/cpu/cpu4/cpufreq/scaling_min_freq
echo 1804800 > /sys/devices/system/cpu/cpu4/cpufreq/scaling_max_freq
#Cpu-Boost
echo 1 > /sys/module/cpu_boost/parameters/input_boost_enabled 
echo 0:0 1:0 2:0 3:0 4:0 5:0 > /sys/module/cpu_boost/parameters/input_boost_freq
echo 10 > /sys/module/cpu_boost/parameters/input_boost_ms
echo 1 > /sys/module/cpu_boost/parameters/input_devfreq_boost
echo 0 > /sys/module/cpu_boost/parameters/dynamic_stune_boost
#Frame-Boost
echo Y > /sys/module/mdss_mdp/parameters/frame_boost
#Workqueue
echo N > /sys/module/workqueue/parameters/power_efficient
#DVFS
echo cpufreq > /sys/class/devfreq/cpubw/governor
echo 34 > /sys/class/devfreq/cpubw/bw_hwmon/io_percent
#Scheduler
echo cfq > /sys/block/mmcblk0/queue/scheduler
echo cfq > /sys/block/mmcblk1/queue/scheduler
#Adreno-Idler-Driver
echo N > /sys/module/adreno_idler/parameters/adreno_idler_active
#GPU-Toggles
echo msm-adreno-tz > /sys/class/kgsl/kgsl-3d0/devfreq/governor
echo 3 > /sys/class/kgsl/kgsl-3d0/devfreq/adrenoboost
echo 710000000 > /sys/class/kgsl/kgsl-3d0/max_gpuclk
echo 710000000 > /sys/class/kgsl/kgsl-3d0/devfreq/max_freq
echo 266666667 > /sys/class/kgsl/kgsl-3d0/devfreq/min_freq
echo 0 > /sys/devices/soc.0/1c00000.qcom,kgsl-3d0/kgsl/kgsl-3d0/max_pwrlevel
#echo 1 > /sys/devices/soc.0/1c00000.qcom,kgsl-3d0/kgsl/kgsl-3d0/min_pwrlevel
echo 5 > /sys/devices/soc.0/1c00000.qcom,kgsl-3d0/kgsl/kgsl-3d0/default_pwrlevel
#MMC-HOST
echo 1 > /sys/class/mmc_host/mmc0/clk_scaling/scale_down_in_low_wr_load
echo 1 > /sys/class/mmc_host/mmc1/clk_scaling/scale_down_in_low_wr_load
#Walt-Toggles
#echo 1 > /proc/sys/kernel/sched_use_walt_cpu_util
#echo 1 > /proc/sys/kernel/sched_use_walt_task_util
#ScheduleTuning
echo 0 > /dev/stune/background/schedtune.boost
echo 0 > /dev/stune/foreground/schedtune.boost
#echo 0 > /dev/stune/top-app/schedtune.boost
echo 1 > /dev/stune/top-app/schedtune.prefer_idle
echo 1 > /dev/stune/foreground/schedtune.prefer_idle
echo 0 > /dev/stune/background/schedtune.prefer_idle
#Cpusets
echo 0-5 > /dev/cpuset/top-app/cpus
echo 1 > /dev/cpuset/top-app/sched_load_balance
echo 0 > /dev/cpuset/top-app/sched_relax_domain_level
echo 0-5 > /dev/cpuset/foreground/cpus
echo 1 > /dev/cpuset/foreground/sched_load_balance
echo 0 > /dev/cpuset/foreground/sched_relax_domain_level
echo 0-3 > /dev/cpuset/background/cpus
echo 0 > /dev/cpuset/background/sched_load_balance
echo 0 > /dev/cpuset/background/sched_relax_domain_level
echo 0-3 > /dev/cpuset/system-background/cpus
#Msm-Thermals
echo 65 > /sys/module/msm_thermal/parameters/temp_threshold
echo 60 > /sys/module/msm_thermal/parameters/core_limit_temp_degC
#Vmpressure
echo 100 > /proc/sys/vm/vfs_cache_pressure
