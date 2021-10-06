Function linearSearchUsingRecursion(arr,val)
{
  if(arr[arr.length-1]===val)
     return arr.length-1
  if(arr.length===0) return -1
  return linearSearchRecursion(arr.slice(0,-1),val)
}
